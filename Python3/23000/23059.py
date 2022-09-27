from sys import stdin
from collections import deque
from heapq import heappop, heappush

n = int(stdin.readline().rstrip())

g = {}
inDegree = {}
ans = []
tmp = {}

for i in range(n):
    a, b = stdin.readline().rstrip().split()
    if a in g:
        g[a].append(b)
    else:
        g[a] = [b]
    if b not in g:
        g[b] = []
    if a not in inDegree:
        inDegree[a] = 0
    if b in inDegree:
        inDegree[b] += 1
    else:
        inDegree[b] = 1

q = deque()
for k, val in inDegree.items():
    if val == 0:
        q.append(k)
        tmp[k] = 1

while q:
    now = q.popleft()
    ans.append((tmp[now], now))
    for nxt in g[now]:
        inDegree[nxt] -= 1
        if inDegree[nxt] == 0:
            tmp[nxt] = tmp[now] + 1
            q.append(nxt)

if max(inDegree.values()) == 0:
    ans.sort()
    for i in ans:
        print(i[1])
else:
    print(-1)
