from sys import stdin
from sys import maxsize
import heapq

V, E = map(int, stdin.readline().strip().split())

graph = [[] for i in range(V+1)]

for i in range(E):
    u, v, w = map(int, stdin.readline().strip().split())
    graph[u].append((w, v))
    graph[v].append((w, u))

v1, v2  = map(int, stdin.readline().strip().split())

dis_s = [maxsize for i in range(V+1)]
dis_s[1] = 0

dis1 = [maxsize for i in range(V+1)]
dis1[v1] = 0

dis2 = [maxsize for i in range(V+1)]
dis2[v2] = 0

hq = []
heapq.heappush(hq, (0, 1))

while hq:
    cur_w, cur_n = heapq.heappop(hq)

    if dis_s[cur_n] < cur_w:
        continue
    else:
        for nxt_w, nxt_n in graph[cur_n]:
            nxt_dis = dis_s[cur_n] + nxt_w
            if nxt_dis < dis_s[nxt_n]:
                dis_s[nxt_n] = nxt_dis
                heapq.heappush(hq, (nxt_dis, nxt_n))

heapq.heappush(hq, (0, v1))

while hq:
    cur_w, cur_n = heapq.heappop(hq)

    if dis1[cur_n] < cur_w:
        continue
    else:
        for nxt_w, nxt_n in graph[cur_n]:
            nxt_dis = dis1[cur_n] + nxt_w
            if nxt_dis < dis1[nxt_n]:
                dis1[nxt_n] = nxt_dis
                heapq.heappush(hq, (nxt_dis, nxt_n))

heapq.heappush(hq, (0, v2))

while hq:
    cur_w, cur_n = heapq.heappop(hq)

    if dis2[cur_n] < cur_w:
        continue
    else:
        for nxt_w, nxt_n in graph[cur_n]:
            nxt_dis = dis2[cur_n] + nxt_w
            if nxt_dis < dis2[nxt_n]:
                dis2[nxt_n] = nxt_dis
                heapq.heappush(hq, (nxt_dis, nxt_n))

res = min(dis_s[v1] + dis1[v2] + dis2[V], dis_s[v2] + dis2[v1] + dis1[V])

print(res if res < maxsize else -1)