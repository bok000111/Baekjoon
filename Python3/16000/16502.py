from sys import stdin
from collections import deque

T = int(stdin.readline().strip())
E = int(stdin.readline().strip())

graph = [[] for i in range(E)]

val = [25 for i in range(4)]
tmp = [0 for i in range(4)]

for i in range(E):
    v, u, w = stdin.readline().strip().split()
    graph[ord(v)-65].append((ord(u)-65, float(w)))

for i in range(T):
    for j in range(4):
        for k in graph[j]:
            tmp[k[0]] += val[j] * k[1]
    val = [i for i in tmp]
    tmp = [0 for i in range(4)]

print(*val, sep='\n')