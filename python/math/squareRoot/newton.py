import math

"""
Enter a positive number or enter/return to quit: 2
The program's estimate is 1.4142135623746899
Python's estimate is      1.4142135623730951
Enter a positive number or enter/return to quit: 4
The program's estimate is 2.0000000929222947
Python's estimate is      2.0
Enter a positive number or enter/return to quit: 9
The program's estimate is 3.000000001396984
Python's estimate is      3.0
Enter a positive number or enter/return to quit

Enter a number (<Enter> to quit): 2
The program's estimate is 1.4142135623746899
Python's estimate is      1.4142135623730951
Enter a number (<Enter> to quit):4
The program's estimate is 2.0000000929222947
Python's estimate is      2.0
Enter a number (<Enter> to quit):9
The program's estimate is 3.000000001396984
Python's estimate is      3.0
Enter a number (<Enter> to quit):5
The program's estimate is 2.236067977499978
Python's estimate is      2.23606797749979
Enter a number (<Enter> to quit):12
The program's estimate is 3.4641016533502986
Python's estimate is      3.4641016151377544
Enter a number (<Enter> to quit):


import newton

assert(newton.newton(49) == 7.000000000000002)
assert(newton.newton(32) == 5.656854250817683)
assert(newton.newton(.5) == 0.7071067811873449)

"""
# Perform Newton's square root approximation 
def newton(num):
    # Initialize the tolerance and estimate
    tolerance = 0.000001
    estimate = 1.0
    # Perform the successive approximations
    while True:
        estimate = (estimate + num / estimate) / 2
        difference = abs(num - estimate ** 2)
        if difference <= tolerance:
            break
    return estimate

def main():
    inputNum = input("Enter a number (<Enter> to quit): ")
    while inputNum != "":
        x = eval(inputNum)        
        estimate = newton(x)
        # Output the result
        print("The program's estimate is", estimate)
        print("Python's estimate is     ", math.sqrt(x))
        inputNum = input("Enter a number (<Enter> to quit): ")

if __name__ == '__main__':
    main()
