#import re

fd = open('A01.txt','r')   # open file read only
buffer = fd.readline()         # read file content
fd.close()                 # close file

if "free" in buffer:   # check string in the buffer
    print("free found")
else:
    print("free is not found")

print(buffer)

fd = open('wssnt10.txt','r')
shakes = fd.readline()
fd.close()
love = open('love.txt', "w")

if "Shakespeare" in shakes:
    print("Shakespeare found")
    love.write(shakes)
else:
    print("Shakespeare is not found")


print(shakes)


def wordCount(filename, listwords):
    try:
        file = open(filename, "r")
        read = file.readlines()
        file.close()
        for word in listwords:
            lower = word.lower()
            print(lower)
        count = 0
        for sentence in read:
            line = sentence.split()
            #print(line)
            for each in line:
                line2 = each.lower()
                line2 = line2.strip("!@#$%^&*()<>?/+:;")
                #print(line2)
                if lower == line2:
                    count += 1


        print("Word search :"+lower,", total count: ",count)
    except FileExistsError:
        print("The file is not there")



#love.close()
wordCount("A01.txt", ["Mem"])
wordCount("wssnt10.txt", ["love"])
wordCount("test.txt", ["CPU"])