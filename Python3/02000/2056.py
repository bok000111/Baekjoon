from sys import stdin

n = int(stdin.readline().rstrip())

g = [[] for i in range(n + 1)]
time = [0 for i in range(n + 1)]

for i in range(1, n + 1):
    a = list(map(int, stdin.readline().rstrip().split()))
    time[i] = a[0]
    for j in range(2, a[1] + 2):
        g[i].append(a[j])

for i in range(1, n + 1):
    tmp = 0
    for j in g[i]:
        tmp = max(tmp, time[j])
    time[i] += tmp

print(max(time))
