def main():
    num = int(input("Enter a number: "))
    if(num % 2) == 0: # num is even
        if((num>=2) and (num<=5)):
            print("Not Weird")
        elif((num>=6) and (num<=20)):
            print("Weird")
        elif(num>20):
            print("Not Weird")

    else:   # num is odd
        print("weird")
        # print("{0} is Odd number".format(num))

if __name__ == "__main__":
    main()
