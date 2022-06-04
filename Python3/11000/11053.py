n = int(input())

arr = list(map(int, input().split()))

dp = ['' for i in range(n)]
ans = 0

for i in range(n):
    tmp = 0
    for j in range(i):
        if arr[i] > arr[j]:
            tmp = tmp if tmp > dp[j] else dp[j]
    dp[i] = tmp + 1
    ans = ans if ans > dp[i] else dp[i]

print(ans)