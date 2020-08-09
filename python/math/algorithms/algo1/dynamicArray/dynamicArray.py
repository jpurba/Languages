
def main():

    # creating an empty list 
    arrayNumber = [] 
    reverseArray = []
  
    # number of elemetns as input 
    arraySize = int(input("Enter number of elements : ")) 
  
    # iterating till the range 
    for i in range(0, arraySize): 
        arrayElement = int(input()) 
  
        arrayNumber.append(arrayElement) # adding the element 
    
    print("\n")
    print("Input array is: ",arrayNumber) 
    print("\n")
    print("Last element of array: ", arrayNumber[arraySize-1])

    
    for i in range(0, arraySize):
        arrayElement = arrayNumber[arraySize-1-i]
        reverseArray.append(arrayElement)
        #print("arrayNumber[arraySize-1-i] = ",arrayNumber[arraySize-1-i],"i = ", i, "arraySize-i=",arraySize-i)
    
    print("\nReverse array is: ",reverseArray) 

if __name__ == "__main__":
    main()