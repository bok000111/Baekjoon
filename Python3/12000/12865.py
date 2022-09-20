from sys import stdin

n, k = map(int, stdin.readline().strip().split())

g = [list(map(int, stdin.readline().strip().split())) for i in range(n)]

res = [[0 for i in range(k + 1)] for i in range(n + 1)]

for i in range(1, n + 1):
    for j in range(1, k + 1):
        if j < g[i - 1][0]:
            res[i][j] = res[i - 1][j]
        else:
            res[i][j] = max(res[i - 1][j], res[i - 1][j - g[i - 1][0]] + g[i - 1][1])

print(res[n][k])