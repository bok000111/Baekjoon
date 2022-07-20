from sys import stdin

n, m = map(int, stdin.readline().strip().split())

A = [list(map(int, stdin.readline().strip().split())) for i in range(n)]
B = [list(map(int, stdin.readline().strip().split())) for i in range(n)]

f = [[a+b for a, b in zip(x, y)] for x,y in zip(A, B)]

for i in [[a+b for a, b in zip(x, y)] for x,y in zip(A, B)]:
    print(*i, sep=' ')