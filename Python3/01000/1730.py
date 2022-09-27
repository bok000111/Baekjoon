from sys import stdin

n = int(stdin.readline().rstrip())

g = [[0 for i in range(n)] for i in range(n)]

a = stdin.readline().rstrip()
arr = ('U', 'D', 'L', 'R')
dr = (-1, 1, 0, 0)
dc = (0, 0, -1, 1)
r, c = 0, 0
for i in a:
    d = arr.index(i)
    if 0 <= r + dr[d] < n and  0 <= c + dc[d] < n:
        if d // 2 == 0:
            if g[r][c] // 2 == 0:
                g[r][c] += 2
            r += dr[d]
            c += dc[d]
            if g[r][c] // 2 == 0:
                g[r][c] += 2
        else:
            if g[r][c] % 2 == 0:
                g[r][c] += 1
            r += dr[d]
            c += dc[d]
            if g[r][c] % 2 == 0:
                g[r][c] += 1
prt = ('.', '-', '|', '+')
for i in g:
    for j in i:
        print(prt[j], end='')
    print()