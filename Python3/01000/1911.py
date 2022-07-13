import math
from sys import stdin

n, l = map(int, stdin.readline().split())

a = [list(map(int, stdin.readline().split())) for i in range(n)]

a.sort(key = lambda x: (x[0]))

index = 0
cnt = 0

for s, e in a:
    if index >= s:
        s = index+1
    elif e <= s:
        continue
    
    tmpcnt = math.ceil((e-s)/l)
    cnt += tmpcnt
    index = max(index, s + tmpcnt * l -1)

print(cnt)