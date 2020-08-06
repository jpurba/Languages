def main():
    num = int(input("Enter number: "))
    if((num>=1) and (num<=150)):
        i=1
        while i<=num:
            print(i,end="")
            i+=1


if __name__ == "__main__":
    main()