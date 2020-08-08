
def main():
    maxAND = 0
    maxOR = 0
    maxXOR = 0

    n = int(input("Enter a number: "))
    k = int(input("Enter a number: "))

    for i  in range(1,k+1):
        for j in range(i+1,n+1):
            nAndK = i & j
            nOrK = i | j
            nXorK = i ^ j
            print("i=", i , "; j=", j, "; n&k=", nAndK, "; n|k= ", nOrK, "; n xor k=",nXorK)
            if((nAndK > maxAND) and (nAndK < k)):
                maxAND = nAndK
            if((nOrK > maxOR) and (nOrK < k)):
                maxOR = nOrK
            if((nXorK > maxXOR) and (nXorK < k)):
                maxXOR = nXorK
    
    print("maxAND= ", maxAND, "; maxOR= ", maxOR, "; maxXOR- ", maxXOR)

if __name__ == "__main__":
    main()