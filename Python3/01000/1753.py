from sys import stdin
from sys import maxsize
import heapq

V, E = map(int, stdin.readline().strip().split())

start = int(stdin.readline().strip())

graph = [[] for i in range(V+1)]

for i in range(E):
    u, v, w = map(int, stdin.readline().strip().split())
    graph[u].append((w, v))

dis = [maxsize for i in range(V+1)]
dis[start] = 0
hq = []
heapq.heappush(hq, (0, start))

while hq:
    cur_w, cur_n = heapq.heappop(hq)

    if dis[cur_n] < cur_w:
        continue
    else:
        for nxt_w, nxt_n in graph[cur_n]:
            nxt_dis = dis[cur_n] + nxt_w
            if nxt_dis < dis[nxt_n]:
                dis[nxt_n] = nxt_dis
                heapq.heappush(hq, (nxt_dis, nxt_n))


for i in range(1, V+1):
    print(dis[i] if dis[i] != maxsize else "INF")