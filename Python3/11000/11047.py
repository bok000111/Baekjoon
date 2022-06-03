n, k = map(int, input().split())

data = [int(input()) for i in range(n)]

ans = 0

for i in data[-1::-1]:
    if k == 0:
        break
    ans += k // i
    k %= i

print(ans)