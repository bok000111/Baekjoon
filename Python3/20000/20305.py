from sys import stdin

n = int(stdin.readline().strip())
q = int(stdin.readline().strip())
mod = 1000000007
f = [0 for i in range(n + 3)]
a = [0 for i in range(n + 3)]
f[1] = 1
for i in range(2, n + 3):
    f[i] =  (f[i - 1] + f[i - 2]) % mod

for i in range(q):
    l, r = map(int, stdin.readline().strip().split())
    a[l] = (a[l] + 1) % mod
    a[r + 1] = (a[r + 1] - f[r - l + 2]) % mod
    a[r + 2] = (a[r + 2] - f[r - l + 1]) % mod

for i in range(2, n + 1):
    a[i] = (a[i] + a[i - 1] + a[i - 2]) % mod

for i in range(1, n + 1):
    print(a[i], end=' ')