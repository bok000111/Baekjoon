from sys import stdin
from sys import maxsize
import heapq

V = int(stdin.readline().strip())
E = int(stdin.readline().strip())

graph = [[] for i in range(V+1)]

for i in range(E):
    u, v, w = map(int, stdin.readline().strip().split())
    graph[u].append((w, v))

start, end = map(int, stdin.readline().strip().split())

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

print(dis[end])