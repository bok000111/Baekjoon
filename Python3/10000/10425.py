from sys import stdin

n = int(stdin.readline().strip())
mod = 100000000
f = [0 for i in range(1000001)]
f2 = {}
f[0] = 0
f[1] = 1
for i in range(2, 100001):
    f[i] =  (f[i - 1] + f[i - 2]) % mod
    f2[f[i]] = i

for i in range(n):
    a = int(stdin.readline().strip()[-8:])
    print(f2[a])