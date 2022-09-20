from sys import stdin

n, m = map(int, stdin.readline().strip().split())

g = [list(map(int, (list(stdin.readline().strip())))) for i in range(n)]

s = 0

for i in range(n):
    for j in range(m):
        if i > 0 and j > 0 and g[i][j] == 1:
            g[i][j] = min(g[i - 1][j], g[i][j - 1], g[i - 1][j - 1]) + 1
        s = max(s, g[i][j])

print(s * s)