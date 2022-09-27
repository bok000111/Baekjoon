from sys import stdin

def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

n = int(stdin.readline().rstrip())

num = list(map(int, stdin.readline().rstrip().split()))
num.sort()
tmp = []
for i in range(1, n):
    tmp.append(num[i] - num[i - 1])
res = tmp[0]
for i in range(1, n - 1):
    res = gcd(res, tmp[i])

print(res)