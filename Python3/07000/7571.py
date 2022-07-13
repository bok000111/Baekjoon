from sys import stdin

n, m = map(int, stdin.readline().split())
x = [0 for i in range(m)]
y = [0 for i in range(m)]
for i in range(m):
    x[i], y[i] = map(int, stdin.readline().split())

x.sort()
y.sort()

mx = x[m//2]
my = y[m//2]

res = 0

for i in range(m):
    res += abs(mx - x[i]) + abs(my - y[i])

print(res)