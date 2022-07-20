from sys import stdin

n, m = map(int, stdin.readline().strip().split())

arr = list(map(int, stdin.readline().strip().split()))

res = [sum(arr[:m])]

for i in range(n - m):
    a = (res[i] - arr[i] + arr[i+m])
    res.append(a)

print(max(res))