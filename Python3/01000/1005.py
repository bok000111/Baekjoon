from sys import stdin, setrecursionlimit

setrecursionlimit(1000000)
def rec(n):
    if dp[n] == -1:
        if len(m[n]) == 0:
            dp[n] = time[n]
        else:
            dp[n] = time[n] + max([rec(i) for i in m[n]])
    return dp[n]

t = int(stdin.readline().rstrip())
for _ in range(t):

    n, k = map(int, stdin.readline().rstrip().split())
    time = [0] + list(map(int, stdin.readline().rstrip().split()))
    dp = [-1 for i in range(n + 1)]
    m = [[] for i in range(n + 1)]
    for i in range(k):
        a, b = map(int, stdin.readline().rstrip().split())
        m[b].append(a)
    w = int(stdin.readline().rstrip())

    print(rec(w))