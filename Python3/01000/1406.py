from sys import stdin
from collections import deque


tmp = list(stdin.readline().strip())
q1 = deque(tmp)
q2 = deque()
n = int(stdin.readline().strip())

for i in range(n):
    tmp = list(stdin.readline().strip().split())
    if len(tmp) == 1:
        if tmp[0] == "L" and q1:
            q2.appendleft(q1.pop())
        elif tmp[0] == "D" and q2:
            q1.append(q2.popleft())
        elif tmp[0] == "B" and q1:
            q1.pop()
    else:
        q1.append(tmp[1])
print(*q1, *q2, sep='')