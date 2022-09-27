from sys import stdin
t = int(stdin.readline().rstrip())
for i in range(t):
    n, c = map(int, stdin.readline().rstrip().split())
    m = list(map(int, stdin.readline().rstrip().split()))
    m.sort()
    s = 1
    e = m[-1] - m[0]
    while s <= e:
        mid = (s + e) // 2
        prev = m[0]
        cnt = 1
        for i in range(1, n):
            if m[i] >= prev + mid:
                cnt += 1
                prev = m[i]
        if cnt >= c:
            s = mid + 1
            ans = mid
        else:
            e = mid - 1
    print(ans)