
import timeit

def sum1(n):
    '''
    Tanke an input and return the sum of the numbers from 0 to n
    it uses for loop to iteratively add across our range + 1
    '''
    final_sum = 0
    for x in range (n+1):  #O(N+1) when n smaller
        final_sum += x     #O(n) when n is bigger (n>10)

    return final_sum

def sum2(n):  # O(n^2)
    '''
    Tanke an input and return the sum of the numbers from 0 to n
    use formula
    Comparison : memory space and time to run (speed) 
    '''
    return (n*(n+1))/2
    '''
    Power of three is the biggest factor on scaling the output
    That is why this algo has O(n^3) complexity
    '''
def Bigo(n):  # O(n^3)
    return 45*n**3 + 20*n**2 + 19

def main():
    n = 5
    x = sum1(n)
    y = sum2(n)
    print ("sum1: Total sum from 0 to", n, " is ", x)
    print ("sum2: Total sum from 0 to", n, " is ", y)

    n = 10
    x = sum1(n)
    y = sum2(n)
    m = Bigo(n)
    print("Bigo (", n ,") is : ", m)
    print ("sum1: Total sum from 0 to", n, " is ", x)
    print ("sum2: Total sum from 0 to", n, " is ", y)

    n = 7
    x = sum1(n)
    y = sum2(n)
    print ("sum1: Total sum from 0 to", n, " is ", x)
    print ("sum2: Total sum from 0 to", n, " is ", y)
    
    '''
    Compare the performance for speed depends on the HW
    '''
    start = timeit.default_timer()
    z = sum1(100)
    stop = timeit.default_timer()

    print("sum1 time: ", stop - start)

    start = timeit.default_timer()
    z = sum2(100)
    stop = timeit.default_timer()

    print("sum2 time: ", stop - start)

    '''
    Use Big O to compare efficiency of these algorithms
    Big O: how quickly run time will grow relative to the input
    as the input get arbitrarily large
    Big 0: based on number of assignment 
    sum1(10) loop 10x+1, 
    sum1(10000) loop 10000x+1
    sum1 can grow very large depends on n. 
    sum1(n) is O(n) since its runtime grows linearly with input size
    How well can it scale as data increase
    '''
    m = Bigo(n)
    print("Bigo (", n ,") is : ", m)

    start = timeit.default_timer()
    n = Bigo(100)
    stop = timeit.default_timer()

    print("Bigo time: ", stop - start)

if __name__ == "__main__":
    main()