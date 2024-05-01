def inc_chk(arr,loc,n):
    count=0
    i=loc+1
    while(i!=loc):  #loop to iterate thorugh the array and loop back and stop just before the max term
        if i>=n-1:
            i =1
        if i<=n-2: 
            if arr[i]>arr[i+1]:
                count+=1
        elif i==n-1:
            arr[i]>arr[0]
            count+=1 
        i+=1
    return count

def dec_chk(arr,loc,n):
    count=0
    i=loc+1
    while(i!=loc):  #loop to iterate thorugh the array and loop back and stop just before the max term
        if i>=n-1:
            i =1
        if i<=n-2: 
            if arr[i]<arr[i+1]:
                count+=1
        elif i==n-1:
            arr[i]<arr[0]
            count+=1 
        i+=1
    return count


if __name__ == "__main__":
    for i in range(int(input())):
        max =0
        n =int(input())
        array = str(input())
        arr = [int(d) for d in array.split()]
        for t in range(n):
            if max<=arr[t]:
                max = arr[t]
                loc =t
        if dec_chk(arr,loc,n)+inc_chk(arr,loc,n) <2:
            print("Yes")
        else:
            print("No")