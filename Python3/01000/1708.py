from sys import stdin
from collections import deque
from functools import cmp_to_key

N = int(stdin.readline().strip())

crd = [tuple(map(int, stdin.readline().strip().split())) for i in range(N)]

crd.sort(key=lambda x:(x[1], x[0]))

def ccw(a, b, c):
    return (b[0]-a[0])*(c[1]-a[1])-(c[0]-a[0])*(b[1]-a[1])

def cmp(a, b):
    return -ccw(crd[0],a,b)

crd[1:] = sorted(crd[1:], key=cmp_to_key(cmp))

s = deque()

nxt = 2

s.append(0)
s.append(1)

while nxt < N:
    while len(s)>=2:
        second = s.pop()
        first = s.pop()
        s.append(first)

        if ccw(crd[first], crd[second], crd[nxt]) > 0:
            s.append(second)
            break
    s.append(nxt)
    nxt+=1

print(len(s))