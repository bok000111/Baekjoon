from sys import stdin
from collections import deque

T = int(stdin.readline().strip())

dir = [(1, 0), (-1, 0), (0, 1), (0, -1)]

for j in range(T):
    M, N, K = map(int, stdin.readline().strip().split())

    graph = [[0 for i in range(M)] for i in range(N)]
    for i in range(K):
        b, a = map(int, stdin.readline().strip().split())
        graph[a][b] = 1
    visit = [[0 for i in range(M)] for i in range(N)]

    ans = 0

    for k in range(M):
        for l in range(N):
            if visit[l][k] == 1 or graph[l][k] == 0:
                continue

            q = deque()
            q.append((l, k))

            while q:
                cur = q.popleft()

                for m in range(4):
                    tmp = [x+y for x, y in zip(cur, dir[m])]

                    if 0 <= tmp[0] < N and 0 <= tmp[1] < M:
                        if graph[tmp[0]][tmp[1]] == 1 and visit[tmp[0]][tmp[1]] == 0:
                            q.append(tmp)
                            visit[tmp[0]][tmp[1]] = 1
            ans += 1
    print(ans)