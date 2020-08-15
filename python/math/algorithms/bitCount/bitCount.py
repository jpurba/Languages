def countTable(input):
    table = [0,1,1,2,1,2,2,3,1,2,2,3,3,3,3,4] # number of ones

    if((input<0) and (input>15)):
        print("Input number is out of range \n")
        return False
    
    inputBit = input&15
    print("Number of ones on ", input ," is ", table[inputBit])
    return table[inputBit]

def countOnes(input):
    count = 0
    while(input):
        count += input & 1
        input >>=1
    return count


def main():
    print("Count ones with look up table\n")
    for i in range(0,16):
        result = countTable(i)

    print("\nCount ones with algorithm 2 count ones\n")
    for i in range(0,256):
        result = countOnes(i)
        print("Number = ", i ,"; # of ones = ", result)


if __name__ == "__main__":
    main()