from sys import stdin

n, m = map(int, stdin.readline().strip().split())

arr = list(map(int, stdin.readline().strip().split()))

sum = [0]
tmp = 0

for i in arr: 
    tmp += i
    sum.append(tmp)

for i in range(m):
    s, e = map(int, stdin.readline().strip().split())

    print(sum[e] - sum[s-1])