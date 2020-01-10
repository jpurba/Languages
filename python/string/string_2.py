name = "Alan Turing"
print(name[0])
print(name[3])
print(name[len(name)-1])
print(name[-1])
print(name[-2])

print("\n")
text = "myfile.txt"
print(text[0:])
print(text[0:1])
print(text[0:2])
print(text[-3:])
print(text[2:6])

print("\n")
data = "Hi there!"
for index in range(len(data)):
    print(index, data[index])

fileList = ["myfile"]