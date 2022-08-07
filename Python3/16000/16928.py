from sys import stdin
from collections import deque

ladder, snake = map(int, stdin.readline().strip().split())

graph = [0 for i in range(101)]
for i in range(snake+ladder):
    s, e = map(int, stdin.readline().strip().split())
    graph[s] = e

q = deque()
q.append(1)

res = [-1 for i in range(101)]
res[1] = 0

while q:
    now = q.popleft()

    if now == 100:
        break

    for i in range(1, 7):
        if (nxt := (now+i)) > 100:
            continue

        if graph[nxt] != 0:
            nxt = graph[nxt]
        
        if res[nxt] == -1:
            res[nxt] = res[now]+1
            q.append(nxt)

print(res[100])