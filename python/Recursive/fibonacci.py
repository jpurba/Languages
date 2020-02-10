"""
Fibonacci numbers: 0,1,1,2,3,5,8,13
F(1) = 1
F(2) = 1
F(3) = 2 = F(1) + F(2)
F(4) = 3 = F(3) + F(2)
F(5) = 5 = F(4) + F(3)
...
F(n) = F(n-1) + F(n-2)
"""
# this function will return the nth Fibonacci number
def fib(n):
    if n<=1:
        return n
    elif n < 3:
        return 1
    else:
        return fib(n-1) + fib(n-2)

def printFibo(n):
    print("All Fibonacci sequence up to ", n, "number: ")
    for i in range(n+1):
        print("Fibonacci #: ", i, " is ",fib(i))

def getNumber():
    num = input("Enter a positive number <Enter> or return to quit: ")
    while num !="":
        x = eval(num)
        num = input("Enter a positive number <Enter>: ")

    return x

def main():
    num = getNumber()
    fibNum = fib(num)
    print("The ", num, " fibonacci number is ", fibNum)
    printFibo(num)

if __name__ == "__main__":
    main()