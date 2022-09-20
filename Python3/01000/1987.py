from sys import stdin

R, C = map(int, stdin.readline().strip().split())
g = [list(stdin.readline().strip()) for i in range(R)]
d = [(-1, 0), (1, 0), (0, 1), (0, -1)]
visit = set()
res = 0
def dfs(x, y, depth):
    global res
    res = max(res, depth)
    for i in d:
        curr_x = x + i[0]
        curr_y = y + i[1]
        if 0 <= curr_x < R and 0 <= curr_y < C and not g[curr_x][curr_y] in visit:
            visit.add(g[curr_x][curr_y])
            dfs(curr_x, curr_y, depth + 1)
            visit.remove(g[curr_x][curr_y])
visit.add(g[0][0])
dfs(0, 0, 1)
print(res)