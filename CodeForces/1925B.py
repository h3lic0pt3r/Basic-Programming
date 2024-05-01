def factorize(n):
    sieve = [True] * (n + 1)

    for x in range(2, int(len(sieve) ** 0.5) + 1):
        if sieve[x]: 
            for i in range(x + x, len(sieve), x):
                sieve[i] = False

    lowerPrimes = [i for i in range(2, len(sieve)) if sieve[i] and (n % i == 0)]
    return lowerPrimes

print(factorize(85675008))
