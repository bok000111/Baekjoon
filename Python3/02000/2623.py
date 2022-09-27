from sys import stdin
from collections import deque

n, m = map(int, stdin.readline().rstrip().split())

g = [[] for i in range(n + 1)]
inDegree = [0 for i in range(n + 1)]
for i in range(m):
    a = list(map(int, stdin.readline().rstrip().split()))
    for i in range(2, len(a)):
        g[a[i - 1]].append(a[i])
        inDegree[a[i]] += 1

q = deque()
for i in range(1, n + 1):
    if inDegree[i] == 0:
        q.append(i)
ans = []
while q:
    tmp = q.popleft()
    ans.append(tmp)
    for i in g[tmp]:
        inDegree[i] -= 1
        if inDegree[i] == 0:
            q.append(i)

if max(inDegree) != 0:
    print(0)
else:
    print(*ans, sep='\n')
