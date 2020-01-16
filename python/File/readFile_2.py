fileName = input ("Enter the file name: ")
with open('./part_4/' + fileName, 'r') as f:
	read_data = f.read()
    print(read_data)
f.closed