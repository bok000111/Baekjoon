from sys import stdin
from collections import deque

a, b = map(int, stdin.readline().strip().split())

bfs = deque()

bfs.append((a, 0))
res = -2

while bfs:
    n = bfs.popleft()

    if n[0] > b:
        continue
    elif n[0] == b:
        res = n[1]
        break
    else:
        bfs.append((n[0]*2, n[1]+1))
        bfs.append((n[0]*10+1, n[1]+1))

print(res+1)