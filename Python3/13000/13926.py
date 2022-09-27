from sys import stdin, setrecursionlimit

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

def gcd(a, b):
    if b > a:
        a, b = b, a
    while b != 0:
        r = a % b
        a = b
        b = r
    return a

def f(x, n):
    return ((x * x) + 1) % n

def pollardRho(n, x):
    tmp = x
    if isPrime(n):
        return n
    else:
        for i in [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]:
            if n % i == 0:
                return i
        y, g = x, 1
        while g == 1:
            x = f(x, n)
            y = f(f(y, n), n)
            g = gcd(abs(x - y), n)
        if g == n:
            return pollardRho(n, tmp + 1)
        elif isPrime(g):
            return g
        else:
            return pollardRho(g, 2)

setrecursionlimit(2500)
n = int(stdin.readline().rstrip())

ans = {}
while n != 1:
    tmp = pollardRho(n, 2)
    if tmp in ans:
        ans[tmp] += 1
    else:
        ans[tmp] = 1
    n //= tmp
res = 1
for key in ans:
    res *= key ** ans[key] - key ** (ans[key] - 1)
print(res)