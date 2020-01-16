
import math
"""
import newton

assert(newton.newton(5,1) == 2.236067977499978)
assert(newton.newton(4,1) == 2.0000000929222947)
"""

# initialize the tolerance and first guess
TOLERANCE = 0.000001
GUESS = 1

def square(x):
    return x*x

def average (x,y):
    return (x+y)/2.0

def goodCheck(guess,n):
    return abs(square(guess)-n) < TOLERANCE

def nextGuess(guess,n):
    return average (guess, n/guess)

"""
1. check if current guess is good enough
2. if yes, retrun it
3. if not, make the next guess and keep going until the guess if good enough
"""

def nsqrt(guess,n):
    if goodCheck(guess,n):
        return guess
    else:
        return nsqrt(nextGuess(guess,n),n)

def newton(n):
    return nsqrt(GUESS,n)

def main():
    """Allows the user to obtain square roots."""
    while True:
        # Receive the input number from the user
        x = input("Enter a positive number or enter/return to quit: ")
        if x == "":
             break
        x = float(x)
        # Output the result
        print("The program's estimate is", newton(x))
        print("Python's estimate is     ", math.sqrt(x))

if __name__ == "__main__":
    main()
