from sys import stdin
from math import inf

n = int(stdin.readline().rstrip())
m = int(stdin.readline().rstrip())

g = [[inf for i in range(n + 1)] for i in range(n + 1)]

for i in range(m):
    a, b, c = map(int, stdin.readline().rstrip().split())
    g[a][b] = min(g[a][b], c)

for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            if i == j:
                g[i][j] = 0 
            else:
                g[i][j] = min(g[i][j], g[i][k] + g[k][j])

for i in range(1, n + 1):
    for j in range(1, n + 1):
        print(g[i][j] if g[i][j] != inf else 0, end=' ')
    print()