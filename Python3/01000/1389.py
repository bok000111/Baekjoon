from sys import stdin
from sys import maxsize
import heapq

N, M = map(int, stdin.readline().strip().split())

graph = [[maxsize for i in range(N)] for i in range(N)]

for i in range(N):
    graph[i][i] = 0

for i in range(M):
    a, b = map(int, stdin.readline().strip().split())
    graph[a-1][b-1] = 1
    graph[b-1][a-1] = 1

for k in range(N):
    for i in range(N):
        for j in range(N):
            graph[i][j] = min(graph[i][k] + graph[k][j], graph[i][j])

m = maxsize
res = 0
for i in range(N):
    if (tmp := sum(graph[i])) < m:
        m = tmp
        res = i+1

print(res)