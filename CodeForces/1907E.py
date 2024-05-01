import math as math
def findcomb(x, y):
  num = math.factorial(x)
  den = math.factorial(x - y)
  den = math.factorial(y) * den
  comb = num / den
  return comb

if __name__ == "__main__":
    for t in range(int(input())):
        n = input()
        prod =1
        arr = [int(d) for d in str(n)]
        for i in arr:
            prod = prod*findcomb(i+2,i)
        print(int(prod))