import random
f = open("./python/File/myFile.txt", "w")
f.write("First line.\nSecond line.\n")

for count in range(500):
    number = random.randint(1,500)
    f.write(str(number) + "\n")

f.close()