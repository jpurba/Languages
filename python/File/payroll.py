fileName = input ("Enter the file name: ")
f = open("./python/File/" + fileName, 'r')
#f = open("./python/File/data.txt","r")

lines = f.readlines()
total=[]
print("Name\tHours\tTotal")
for line in lines:
    line = line.strip()
    line = line.split()
    #print("line: ",line)
    totalWage = int(line[1]) * float(line[2])
    total = [line[0], line[1], totalWage]
    #print("total:", total)
    print(line[0], int(line[1]), "% 12.2f" %totalWage)

f.close()
