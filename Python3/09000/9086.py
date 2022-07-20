from sys import stdin

n = int(stdin.readline().strip())

for i in range(n):
    a = stdin.readline().strip()
    print(a[0], a[-1], sep='')