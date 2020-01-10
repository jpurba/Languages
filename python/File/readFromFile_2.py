fileName = input ("Enter the file name: ")
f = open("./python/File/" + fileName, 'r')
#f = open("./python/File/data.txt","r")
format = []
lines = f.readlines()
print(lines[0])

print("Name\tHours\tTotal\n")
for line in lines:
    line = line.strip()
    print(line)
    col0 = line.split()
    print(col0[1])
    #print(col1)
    #print(col2)

f.close()
