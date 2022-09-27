from sys import stdin, setrecursionlimit

setrecursionlimit(10000)

def dfs(r, c):
    if dp[r][c][1] != -1:
        return dp[r][c][1]
    dp[r][c][1] = 0
    for i in dir:
        n_r = r + i[0]
        n_c = c + i[1]
        if 0 <= n_r < n and 0 <= n_c < m:
            if dp[r][c][0] > dp[n_r][n_c][0]:
                dp[r][c][1] += dfs(n_r, n_c)
    return dp[r][c][1]

n, m = map(int, stdin.readline().rstrip().split())
dp = [list(map(lambda x : [int(x), -1], stdin.readline().rstrip().split())) for i in range(n)]
dp[n - 1][m - 1][1] = 1
dir = ((1, 0), (-1, 0), (0, 1), (0, -1))
print(dfs(0, 0))