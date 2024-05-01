from itertools import groupby
if __name__ == "__main__":
    for i in range(int(input)):
        arr =[]
        count =0
        for t in range(int(input())-1):
            n = input()
            arr.append([int(d) for d in str(n)])
        arr2 = set([(i, arr.count(i)) for i,_ in groupby(arr)])
        for t in arr2:
            if(t[1])>2:
                count+=1
        print(count) 