from sys import stdin

n = int(stdin.readline().rstrip())
arr = list(map(int, stdin.readline().rstrip().split()))
dp = [1 for i in range(n)]
for i in range(n):
    for j in range(i):
        if arr[i] > arr[j]:
            dp[i] = max(dp[i], dp[j] + 1)

tmp = max(dp)
print(tmp)
ans = []
for i in range(n - 1, -1, -1):
    if dp[i] == tmp:
        ans.append(arr[i])
        tmp -= 1

print(*reversed(ans))