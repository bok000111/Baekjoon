from sys import stdin

def modPow(base, pow, mod):
    result = 1
    while pow > 0:
        if pow % 2 == 1:
            result = result * base % mod
        base = base * base % mod
        pow //= 2
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

def isPalindrom(i):
    s = 0
    e = len(i) - 1
    while s < e:
        if i[s] != i[e]:
            return False
        s += 1
        e -= 1
    return True

n, m = map(int, stdin.readline().strip().split())
for i in range(n, m + 1):
    if isPalindrom(str(i)) and isPrime(i):
        print(i)
print(-1)