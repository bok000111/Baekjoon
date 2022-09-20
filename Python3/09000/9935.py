from sys import stdin
from collections import deque

q1 = deque(stdin.readline().strip())
q2 = deque()
str = list(stdin.readline().strip())
s_len = len(str)
for i in q1:
    q2.append(i)
    if len(q2) >= s_len and q2[-s_len:] == str:
        for i in range(s_len):
            q2.pop()
    
if q2:
    print(*q2, sep='')
else:
    print("FRULA")
