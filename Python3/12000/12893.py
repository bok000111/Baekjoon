from sys import stdin
from collections import deque

def bfs(n):
    q = deque()
    q.append(n)
    c[n] = 1

    while q:
        now = q.popleft()
        for i in g[now]:
            if c[i] == 0:
                c[i] = c[now] * -1
                q.append(i)
            else:
                if c[now] == c[i]:
                    return False
    return True

v, e = map(int, stdin.readline().rstrip().split())

g = [[] for i in range(v + 1)]
c = [0 for i in range(v + 1)]

for i in range(1, e + 1):
    a, b = map(int, stdin.readline().rstrip().split())
    g[a].append(b)
    g[b].append(a)
flag = True
for i in range(1, v + 1):
    if c[i] == 0:
        if not bfs(i):
            flag = False
            break
print(1 if flag else 0)