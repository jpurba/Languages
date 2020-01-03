#!/bin/python3
# example for simple link List

class Node:

    def __init__(self, data):
        self.data = data  # assign data
        self.next = None  # initialize next as null
 
# Linked List class contains a Node object
class LinkedList:

    # Function to initialize head
    def __init__(self):
        self.head = None

    def printList(self):
        temp = self.head
        while (temp):
             print (temp.data),
             temp = temp.next

if __name__ == '__main__':

   llist = LinkedList()

   llist.head = Node(1)
   second     = Node(2)
   third      = Node(3)
   fourth     = Node(4)

   llist.head.next = second;
   second.next     = third;
   third.next      = fourth;

   llist.printList()


