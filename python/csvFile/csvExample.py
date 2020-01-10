import csv

f = open('./python/csvFile/data.csv','r')


csvReader = csv.reader(f, delimiter=',')
people = []

for row in csvReader:
    try:
        people.append([row[0], int(row[1]), row[2]])
    except:
        pass
    

print("People in the list:")

for item in people:
    print(item)

f.close()
