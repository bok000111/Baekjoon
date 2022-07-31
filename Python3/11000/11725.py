from sys import stdin
from collections import deque

n = int(stdin.readline().strip())

graph = [[] for i in range(n+1)]

for i in range(n-1):
    a, b = map(int, stdin.readline().strip().split())
    graph[a].append(b)
    graph[b].append(a)

m = [0 for i in range(n+1)]
visit = [False for i in range(n+1)]

q = deque()
q.append(1)

while q:
    now = q.popleft()

    for i in graph[now]:
        if visit[i] == False:
            m[i] = now
            q.append(i)
    visit[now] = True

for i in m:
    if i == 0:
        continue
    print(i)