from collections import deque

n, m = map(int, input().split())

graph = [list(map(int, list(input()))) for i in range(n)]

q = deque()
q.append((0, 0))
x = [-1, 1, 0, 0]
y = [0, 0, -1, 1]

while q:
    r, c = q.popleft()
    
    for i in range(4):
        nr = r + x[i]
        nc = c + y[i]
        
        if nr < 0 or nr >= n or nc < 0 or nc >= m:
            continue
        
        if graph[nr][nc] == 0:
            continue
    
        if graph[nr][nc] == 1:
            graph[nr][nc] = graph[r][c] + 1
            q.append((nr, nc))

print(graph[n-1][m-1])