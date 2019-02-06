#!/usr/bin/python3
import scipy as sp
import matplotlib.pylab as plt
import math
import statistics
import random

random.seed(2398)

# calculate a random number where: a<= rand < b
def rand(a,b):
    return (b-a)*random.random() + a

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
    
def statsEx ():
    list = [1, 2, 3, 3, 4, 5, 1, 3, 2, 4, 4, 5, 4]
    print("The list is : ", end="")
    #print(list)
    print(*list, sep = ", ")
    print("The mean value is : ", end="")
    print (statistics.mean(list))
    print("The median value is : ", end="")
    print (statistics.median(list))
    print("The median low value is : ", end="")
    print (statistics.median_low(list))
    print("The median high value is : ", end="")
    print (statistics.median_high(list))
    print("The median grouped value is : ", end="")
    print (statistics.median_grouped(list))
    print("The mode value is : ", end="")
    print (statistics.mode(list))
    
def is_prime(num):
    #Naive method of checking prime
    for n in range(2,num):
        if num%n == 0:
            print ('not prime')
            break
    else: #if never mode zero then prime
        print ('prime')
     
def calcFutureValue(monthlyInv, monthlyRate, months):
    futureValue = 0.0
    for i in range(months):
        futureValue = (futureValue + monthlyInv) * (1+monthlyRate)
    return futureValue;

if __name__=='__main__':
    a = 31
    print(a,'is ', end="")
    is_prime(a)
    b = 133
    print(b,'is ', end="") 
    is_prime(b)
    
    monthlyInv  = 1000
    monthlyRate = 0.0016
    months      = 36
    print('Invest per month: '+ str( monthlyInv))
    print('Monthly rate: '+ str(monthlyRate))
    print('Total time in months: '+ str(months))
    print('Future Value investments: ' + str(calcFutureValue(monthlyInv, monthlyRate, months)))

    print('\n')
    statsEx();
       
    print('\n')
    # absolute value
    x = -1.5
    print ('Absolute value of x = ', x , ' is ', abs(x))
    
    y = 6
    print ( y , ' factorial is ', factorial(y))

    z = 10
    print ('Random number between ', y,' and ',z,' is ',rand(y,z))

    # draw amplitude modulated sine signals

    t = sp.arange(0,10,1/100)
    plt.plot(t,sp.sin(1.7*2*sp.pi*t)+sp.sin(1.9*2*sp.pi*t))
    plt.show()
