from sys import stdin
from collections import deque

M, N, H = map(int, stdin.readline().strip().split())

dir = [(1, 0, 0), (-1, 0, 0), (0, 1, 0), (0, -1, 0),(0, 0, 1), (0, 0, -1)]

graph = [[list(map(int, stdin.readline().strip().split())) for i in range(N)] for i in range(H)]

q = deque()

for i in range(H):
    for j in range(N):
        for k in range(M):
            if graph[i][j][k] == 1:
                q.append((i, j, k))

while q:
    h, n, m = q.popleft()

    for i in range(6):
        tmph = h + dir[i][0]
        tmpn = n + dir[i][1]
        tmpm = m + dir[i][2]
        if 0<=tmpn<N and 0<=tmpm<M and 0<=tmph<H and graph[tmph][tmpn][tmpm] == 0:
            graph[tmph][tmpn][tmpm] = graph[h][n][m]+1
            q.append((tmph, tmpn, tmpm))

res = 1

for i in graph:
    for j in i:
        if res == 0:
            break
        res = max(max(j), res)
        if 0 in j:
            res = 0
            break

print(res-1)
