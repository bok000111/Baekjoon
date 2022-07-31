from sys import stdin
import heapq
from collections import deque

start, end = map(int, stdin.readline().strip().split())

time = [100001 for i in range(100001)]
visit = [0 for i in range(100001)]
q = deque()
q.append(start)
visit[start] = 1
time[start] = 0

while q:
    now = q.popleft()

    if now*2 <= 100000 and visit[now*2] == 0:
        q.appendleft(now*2)
        time[now*2] = min(time[now], time[now*2])
    if now+1 <= 100000 and visit[now+1] == 0:
        q.append(now+1)
        time[now+1] = min(time[now]+1, time[now+1])
    if now-1 >= 0 and visit[now-1] == 0:
        q.append(now-1)
        time[now-1] = min(time[now]+1, time[now-1])
    visit[now] = 1

print(time[end])