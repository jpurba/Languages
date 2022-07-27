def linear_search(lst, target):
    #Returns the index position of the target if found else return
    for i in range(0, len(lst)):
        if lst[i] == target:
            return i
    return None
    
def linearSearch(lst,target):
    for index, value in enumerate(lst):
        if value == target:
            return index
    return None
    
def linSearch(arr, n, x):
    for i in range(0,n):
        if (arr[i]==x):
            return i
    return -1

def addEx(a,b,c):
    c=c+a+b
    return (a*b*c)

def verify(index):
    if index is not None:
        print("Target found at index: ", index)
    else:
        print("Target not found in list")

def verifyBool(status):
    if status is not False:
        print("Found pair number with target value")
    else:
        print("No pair nunmber with target value")


def pairSum(lst, target):
    #Returns whether the pair exist with sum equal to target
    for i in range(0, len(lst)):
        for j in range(i+1, len(lst)-1):
            if (lst[i]+lst[j]) == target:
                return True
    return False

# python function to multiply two matrices without numpy
def matrixMultiply():
    # take first matrix inputs
    print("Enter the order of matrix 1:")
    m, n = list(map(int, input().split()))
    print("Enter row values")
    m1 = []
    for i in range(m):
        print("Enter row",  i, "values:")
        row = list(map(int, input().split()))
        m1.append(row)

    # take second matrix inputs
    print("Enter the order of matrix2:")
    p, q = list(map(int, input().split()))
    print("Enter row values")
    m2 = []
    for j in range(p):
        print("Enter row", j, "value:")
        row = list(map(int, input().split()))
        m2.append(row)

    # print both matrices
    print("Matrix 1:", m1)
    print("Matrix 2:", m2)

    # multiply matrix
    result = []
    for i in range(m):
        row = []
        for j in range (q):
            row.append(0)
        result.append(row)
    print("Matrix multiplication:")
    for i in range(m):
        for j in range(q):
            for k in range(n):
                result[i][j] += m1[i][k] * m2[k][j]
    for row in result:
        print(row)


def main():
    num = [1,2,3,4,5,6,7,8,9,10]
    target = 6
    result = linear_search(num,target)
    verify(result)
    result = linearSearch(num, target)
    verify(result)
    target = 11
    result = linear_search(num,target)
    verify(result)
    result = linearSearch(num,target)
    verify(result)
    resBool = pairSum(num,target)
    verifyBool(resBool)
    target = 21
    resBool = pairSum(num,target)
    verifyBool(resBool)
    print("Hello world")
    arr = [2, 3, 4, 10, 40]
    x = 4
    n = len(arr)
    response = linSearch(arr,n,x)
    if(response == -1):
        print("Element is not present in array")
    else:
        print("Element is present at index ", response)
    print("numer are:", 1,2,3, " and output of addEx = ", addEx(1,2,3))
    matrixMultiply()



if __name__ == "__main__":
    main()