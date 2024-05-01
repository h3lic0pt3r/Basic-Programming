def dec2bin(number: int):
    ans = ""
    if ( number == 0 ):
        return 0
    while ( number ):
        ans += str(number&1)
        number = number >> 1
     
    ans = ans[::-1]
 
    return ans 
 
if __name__ == "__main__":
    for i in range(int(input())):
        inpu = input()
        arr = inpu.split()
        
        N = int(arr[0])
        M = int(arr[1])
        if N>=M:
            N = dec2bin(N)
            M = dec2bin(M)
            lenN= len(str(N))
            lenM= len(str(M))
            if lenN and lenM >=3:
                if int(N[2:lenM]) == int(M[2:]) and int(N[:1]) == int(M[:1]):
                    print("YES")
                else:    
                    print("NO")
            else:
                if int(N[:1]) == int(M[:1]):
                    print("YES")
                else:    
                    print("NO")
    