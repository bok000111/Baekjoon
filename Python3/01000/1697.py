from collections import deque
from sys import stdin

S, E = map(int, stdin.readline().strip().split())

visit = [False for i in range(100001)]
time = [100001 for i in range(100001)]

q = deque()
q.append(S)

visit[S] = True
time[S] = 0

while q:
    n = q.popleft()

    if n == E:
        break


    if n*2 < 100001 and visit[n*2] == False:
        q.append(n*2)
        time[n*2] = min(time[n*2], time[n]+1)
    if n+1 < 100001 and visit[n+1] == False:
        q.append(n+1)
        time[n+1] = min(time[n+1], time[n]+1)
    if 0 <= n-1 and visit[n-1] == False:
        q.append(n-1)
        time[n-1] = min(time[n-1], time[n]+1)

    visit[n] = True

print(time[E])