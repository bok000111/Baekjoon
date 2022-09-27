from sys import stdin

def modPow(a, b, mod):
    result = 1
    while b > 0:
        if b % 2 == 1:
            result = result * a % mod
        a = a * a % mod
        b //= 2
    return result

def millerRabin(n, p):
    if p % n == 0:
        return True
    k = n - 1
    while True:
        tmp = modPow(p, k, n)
        if tmp == n - 1:
            return True
        if k % 2 == 1:
            return (tmp == 1 or tmp == n - 1)
        k //= 2

def isPrime(n):
    prime = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37]
    if n == 2:
        return True
    elif n % 2 == 0:
        return False
    else:
        for i in prime:
            if n == i:
                return True
            if not millerRabin(n, i):
                return False
    return True

n, m = map(int, stdin.readline().rstrip().split())

if n % 2 == 0:
    n += 1

for i in range(n, m + 1, 2):
    if isPrime(i) or i == 9:
        print(i, end=' ')