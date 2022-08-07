from sys import stdin
from collections import deque

dir = [(1, 0), (-1, 0), (0, 1), (0, -1)]

N = int(stdin.readline().strip())

graph = [list(map(int, list(stdin.readline().strip()))) for i in range(N)]
visit = [[False for i in range(N)] for i in range(N)]

ans = []

for i in range(N):
    for j in range(N):
        if graph[i][j] == 0:
            continue

        q = deque()
        q.append((i, j))
        cnt = 1

        while q:
            x, y = q.popleft()
            graph[x][y] = 0

            for k in range(4):
                tmp = (x+dir[k][0], y+dir[k][1])

                if 0 <= tmp[0] < N and 0 <= tmp[1] < N:
                    if graph[tmp[0]][tmp[1]] == 1:
                        graph[tmp[0]][tmp[1]] = 0
                        q.append(tmp)
                        cnt += 1
        ans.append(cnt)
    
    ans.sort()
print(len(ans))
print(*ans, sep='\n')