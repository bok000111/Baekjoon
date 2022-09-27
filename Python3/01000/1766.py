from sys import stdin
from heapq import heappop, heappush

n, m = map(int, stdin.readline().rstrip().split())

g = [[] for i in range(n + 1)]
inDegree = [0 for i in range(n + 1)]
for i in range(m):
    a, b = map(int, stdin.readline().rstrip().split())
    g[a].append(b)
    inDegree[b] += 1

q = []
for i in range(1, n + 1):
    if inDegree[i] == 0:
        heappush(q, i)
ans = []
while q:
    tmp = heappop(q)
    ans.append(tmp)
    for i in g[tmp]:
        inDegree[i] -= 1
        if inDegree[i] == 0:
            heappush(q, i)

print(*ans)
