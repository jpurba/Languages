#import re

fd = open('A01.txt','r')   # open file read only
buffer = fd.readline()     # read file content
fd.close()                 # close file

if "free" in buffer:       # check string in the buffer
    print("free found")
else:
    print("free is not found")

print(buffer)

fd = open('wssnt10.txt','r') # print another file
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
            #print(lower)

        index = 0
        index1 = 0
        index2 = 0

        count = 0
        memTot = 0
        memTotAvg = 0
        memUsed = 0
        memUsedAvg = 0
        memFree = 0
        memFreeAvg = 0
        for sentence in read:
            index += 1
            line = sentence.split()
            #print(line)
            for each in line:
                index1 += 1
                line2 = each.lower()
                line2 = line2.strip("!@#$%^&*()<>?/+:;")
                #print(line2)
                if lower == line2:
                    index2 += 1
                    count += 1
                    total = int(line[3])  # take total memory
                    used  = int(line[4])  # take used memory
                    free  = int(line[5])  # take free memory
                    #print(total, used, free)
                    #print("index2 = ", index2, "index1 = ", index1)
                    memTot = memTot + total
                    memUsed = memUsed + used
                    memFree = memFree + free
                    print(memTot, memUsed, memFree)

        #print("index = ", index, "index1 = ", index1, "index2 = ", index2)
        print("Word search :"+lower,", total count: ",count)
        print(memTot,memUsed, memFree)
        memTotAvg = memTot / count
        memFreeAvg = memFree / count
        memUsedAvg = memUsed / count
        print(memTotAvg, memUsedAvg, memFreeAvg)
    except FileExistsError:
        print("The file is not there")



love.close()
wordCount("A01.txt", ["Mem"])
