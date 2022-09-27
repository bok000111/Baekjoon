from sys import stdin
from math import inf

n, m = map(int, stdin.readline().rstrip().split())

g = [[0 for i in range(n + 1)] for i in range(n + 1)]

for i in range(m):
    a, b = map(int, stdin.readline().rstrip().split())
    g[a][b] = 1
    g[b][a] = -1

for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            if g[i][k] == g[k][j] != 0:
                g[i][j] = g[i][k]
cnt = 0
for i in range(1, n + 1):
    if g[i].count(0) - 2 == 0:
        cnt += 1
print(cnt)