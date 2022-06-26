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
    

if __name__ == "__main__":
    main()