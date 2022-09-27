from sys import stdin
from collections import deque

n, m = map(int, stdin.readline().rstrip().split())

g = [[] for i in range(n + 1)]
inDegree = [0 for i in range(n + 1)]
ans = [0 for i in range(n + 1)]
for i in range(m):
    a, b = map(int, stdin.readline().rstrip().split())
    g[a].append(b)
    inDegree[b] += 1

q = deque()
for i in range(1, n + 1):
    if inDegree[i] == 0:
        q.append(i)
        ans[i] = 1

while q:
    tmp = q.popleft()
    for i in g[tmp]:
        inDegree[i] -= 1
        if inDegree[i] == 0:
            q.append(i)
            ans[i] = ans[tmp] + 1

print(*ans[1:])
