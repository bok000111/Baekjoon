from sys import stdin

N = int(stdin.readline().strip())

graph = [list(map(int, stdin.readline().strip().split())) for i in range(N)]

for k in range(N):
    for i in range(N):
        for j in range(N):
            if graph[i][j] == 1:
                continue
            if graph[i][k] == 1 and graph[k][j] == 1:
                graph[i][j] = 1

for i in graph:
    print(*i, sep=' ')
