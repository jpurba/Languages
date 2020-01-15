import numpy

def getNumbers():
    nums = []

    inTyped = input("Enter a number <Enter> to quit: ")
    while inTyped != "":
        inputNum = eval(inTyped)
        nums.append(inputNum)
        inTyped = input("Enter a number <Enter> to quit: ")
    return nums

def mean(nums):
    if len(nums) == 0:
        return 0
    
    sum = 0.0
    for num in nums:
        sum = sum + num
    return sum / len(nums)

def numpyMean(nums):
    mean = numpy.mean(nums)
    return mean

def numpyMedian(nums):
    median = numpy.median(nums)
    return median

def main():
    speed = [99,86,87,88,111,86,103,87,94,78,77,85,86]
    mean = numpyMean(speed)
    median = numpyMedian(speed)
    print("The speed are: ", speed)
    print("Numpy mean: ", mean)
    print("Numpy median: ", median)
    print("\n")

    data = getNumbers()
    mean = numpyMean(data)
    median = numpyMedian(data)
    print("Input data: ", data)
    print("Numpy mean: ", mean)
    print("Numpy median: ", median)


if __name__ == '__main__':
    main()