#!/bin/python3
print('Hello WOrld')
message = "Josua Purba"
print(message)

message1 = 'Jeremiah\'s house'
print(message1)
message2 = "Joseph's toys"
print(message2)

message3 = """This message has more 
than one lines with
three double quotes"""
print(message3)
print("The length of the message",message3,"is")
print(len(message3))


#message = "Josua Purba"
print(message[3])
print(message[0:5])

#Slicing string
print(message[:5])
print(message[6:])

#some method for string
print(message.lower())
print(message.upper())
print(message.count('Josua'))
print("'Josua' appears in message 'Josua Purba' ",message.count('Josua'), " times")
print("Letter 'u' appears in message 'Josua Purba' ",message.count('u'), " times")

print("Location 'Purba' in the message 'Josua Purba' is on index",message.find('Purba'))

#replace one word
message4 = message.replace('Josua','Joseph')
print(message4)
message4 = message4.replace('Joseph','Jeremiah')
print(message4)

greeting = 'Hello'
name = 'Rohany'
message5 = greeting + ', ' + name + '. Welcome!'
print(message5)

message6 = '{}, {}, Welcome!'. format(greeting,name)
print(message6)

#Later python version has f string method
#message7 = f'{greeting}, {name}. Welcome!'
#print(message7)

# list all method can be used for string name
print(dir(name))
