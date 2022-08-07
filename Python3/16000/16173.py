from sys import stdin
from collections import deque

n = int(stdin.readline().strip())

graph = [list(map(int, stdin.readline().strip().split())) for i in range(n)]

v = [[0 for i in range(n)] for i in range(n)]

q = deque()
q.append((0, 0))

dir = [(1, 0), (-1, 0), (0, 1), (0, -1)]

while q:
    c, r = q.pop()

    if 0 <= c < n and 0 <= r < n:
        if v[c][r] == 1:
            continue
        if graph[c][r] == -1:
            v[c][r] = 1
            break

        q.append((c+graph[c][r], r))
        q.append((c, r+graph[c][r]))
        q.append((c-graph[c][r], r))
        q.append((c, r-graph[c][r]))
        v[c][r] = 1

if v[n-1][n-1] == 1:
    print('HaruHaru')
else:
    print('Hing')