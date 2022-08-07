from sys import stdin
import heapq

n = int(stdin.readline().strip())

pq = []

for i in range(n):
    if (tmp := int(stdin.readline().strip())) == 0:
        if len(pq) == 0:
            print(0)
        else:
            print(-heapq.heappop(pq))
    else:
        heapq.heappush(pq, -tmp)