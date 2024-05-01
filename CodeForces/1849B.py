if __name__ == "__main__":
    for testno in range(int(input())):
        inp = input()
        arr = inp.split()
        n = int(arr[0])
        k = int(arr[1]) 
        arr2 = [int(d) for d in str(input()).split()]
        arr3=[]
        def mod(l):
            if l[1]%k == 0:
                return k
            else:
                return l[1]%k
        for i, a in enumerate(arr2):
            arr3.append([i,a])
        arr3.sort(key=mod,reverse=True)
        for _ in arr3:
            print(_[0]+1,end=" ")
        print("")