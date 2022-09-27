from sys import stdin
from collections import deque

n, m = map(int, stdin.readline().rstrip().split())

g = [[] for i in range(n + 1)]
time = [0 for i in range(n + 1)]
inDegree = [0 for i in range(n + 1)]
ans = [0 for i in range(n + 1)]

for i in range(1, n + 1):
    time[i] = int(stdin.readline().rstrip())

for i in range(1, m + 1):
    a, b = map(int, stdin.readline().rstrip().split())
    g[a].append(b)
    inDegree[b] += 1

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

print(max(ans))
