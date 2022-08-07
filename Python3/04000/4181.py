from sys import stdin

N = int(stdin.readline().strip())

crd = []

for i in range(N):
    a, b, c = stdin.readline().strip().split()
    if c == 'Y':
        crd.append((int(a), int(b)))

crd.sort()

def ccw(a, b, c):
    return (b[0]-a[0])*(c[1]-a[1])-(c[0]-a[0])*(b[1]-a[1])

low = []
up = []

for i in crd:
    while len(low)>1 and ccw(low[-2], low[-1], i)<0:
        low.pop()
    low.append(i)

for i in reversed(crd):
    while len(up)>1 and ccw(up[-2], up[-1], i)<0:
        up.pop()
    up.append(i)

res = low[:-1]+up[:-1]

print(len(res))
for i in res:
    print(*i, sep=' ')