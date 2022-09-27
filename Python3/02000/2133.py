from sys import stdin

n = int(stdin.readline().rstrip())

dp = [0 for i in range(n + 2)]
dp[0] = 1
dp[2] = 3
for i in range(4, n + 1):
    if i % 2 == 0:
        dp[i] = dp[i - 2] * dp[2] + sum(dp[0:i - 3]) * 2
print(dp[n])