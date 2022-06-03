from sys import stdin
from sys import stdout

n, m, r = map(int, stdin.readline().split())

graph = [[] for i in range(n+1)]
visit = [0 for i in range(n+1)]
ans = [0 for i in range(n+1)]

for i in range(m):
    a, b = map(int, stdin.readline().split())
    graph[a].append(b)
    graph[b].append(a)

for i in graph:
    i.sort(reverse = True)

stack, depth, v = [r], 1, r

while stack:
    v = stack.pop()
    if not visit[v]:
        visit[v] = 1
        ans[v] = depth
        depth += 1
        for i in graph[v]:
            if not visit[i]:
                stack.append(i)

for i in range(1, n+1):
    stdout.write(str(ans[i]) + '\n')