fileName = input ("Enter the file name: ")
f = open("./python/File/" + fileName, 'r')
#f = open("./python/File/data.txt","r")
print("Name\tHours\tTotal\n")
for line in f:
    print(line)

f.close()