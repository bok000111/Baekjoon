from sys import stdin
from collections import deque

n = int(stdin.readline().rstrip())

g = [[] for i in range(n + 1)]
time = [0 for i in range(n + 1)]
inDegree = [0 for i in range(n + 1)]
ans = [0 for i in range(n + 1)]

for i in range(1, n + 1):
    a = list(map(int, stdin.readline().rstrip().split()))
    time[i] = a[0]
    for j in a[1:-1]:
        g[j].append(i)
        inDegree[i] += 1

q = deque()
for i in range(1, n + 1):
    if inDegree[i] == 0:
        q.append(i)

while q:
    now = q.popleft()
    ans[now] += time[now]
    for nxt in g[now]:
        inDegree[nxt] -= 1
        ans[nxt] = max(ans[nxt], ans[now])
        if inDegree[nxt] == 0:
            q.append(nxt)

print(*ans[1:], sep='\n')
