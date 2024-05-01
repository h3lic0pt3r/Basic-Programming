from itertools import groupby

if __name__ == "__main__":
    for testno in range(int(input())):
        sum =0
        n = int(input()) 
        string = str(input())
        arr2 = set([(i, [*string].count(i)-(ord(i)-64)) for i,_ in groupby([*string])])
        for i in arr2:
            if i[1]>=0:
                sum+=1
        print(sum)