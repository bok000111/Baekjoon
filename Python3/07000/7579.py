from sys import stdin
from collections import deque

M, N = map(int, stdin.readline().strip().split())

dir = [(1, 0), (-1, 0), (0, 1), (0, -1)]

graph = [list(map(int, stdin.readline().strip().split())) for i in range(N)]

q = deque()

for i in range(N):
    for j in range(M):
        if graph[i][j] == 1:
            q.append((i, j))


while q:
    n, m = q.popleft()

    for i in range(4):
        tmpn = n + dir[i][0]
        tmpm = m + dir[i][1]
        if 0<=tmpn<N and 0<=tmpm<M and graph[tmpn][tmpm] == 0:
            graph[tmpn][tmpm] = graph[n][m]+1
            q.append((tmpn, tmpm))


res = 0

for i in graph:
    res = max(max(i), res)
    if 0 in i:
        res = 0
        break

print(res-1)
