from sys import stdin
from sys import stdout

n = int(stdin.readline())

a = [(tuple(map(int, stdin.readline().split()))) for i in range(n)]

a.sort(key = lambda x: (x[1], x[0]))

cnt = end = 0

for s, e in a:
    if s >= end:
        cnt += 1
        end =e

stdout.write(str(cnt))