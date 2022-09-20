from sys import stdin

n = int(stdin.readline().strip())

dp = [0 for i in range(n + 1)]
visit = [i - 1 for i in range(n + 1)]
for i in range(2, n + 1):
    dp[i] = dp[i - 1] + 1
    if i % 3 == 0:
        if dp[i] > dp[i // 3] + 1:
            visit[i] = i // 3
            dp[i] = dp[i // 3] + 1
    if i % 2 == 0:
        if dp[i] > dp[i // 2] + 1:
            visit[i] = i // 2
            dp[i] = dp[i // 2] + 1
print(dp[n])
tmp = n
print(n, end=' ')
while visit[tmp] != 0:
    print(visit[tmp], end=' ')
    tmp = visit[tmp]