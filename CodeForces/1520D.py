from itertools import groupby
import math as math

if __name__ == "__main__":
    for testno in range(int(input())):
        n = int(input())
        arr = [int(d) for d in str(input()).split()]
        for i in range(n):
            arr[i] = arr[i]-i
        arr2 = set([(i, arr.count(i)) for i,_ in groupby(arr)])
        sum =0
        for t in arr2:
            if t[1]>=2:
                sum+=(t[1]*(t[1]-1)/2)
        print(arr2)