from sys import stdin
n = int(stdin.readline())

for i in range(n):
    m = int(stdin.readline())
    a = list(map(int, stdin.readline().split()))
    a.sort()

    diff = 0

    for j in range(2, m):
        diff = max(diff, a[j] - a[j-2])
    
    print(diff)

    a.clear()