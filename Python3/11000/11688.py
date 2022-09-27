from sys import stdin
from math import lcm

a, b, L = map(int, stdin.readline().rstrip().split())
div = []

for i in range(1, int(L ** 0.5 + 1)):
    if L % i == 0:
        div.append(i)
        div.append(L // i)
div.sort()

tmp = lcm(a, b)
if L % tmp != 0:
    print(-1)
else:
    for i in div:
        if lcm(tmp, i) == L:
            print(i)
            break