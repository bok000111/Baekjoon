from sys import stdin

n = int(stdin.readline().strip())
s = 1
e = n
while s <= e:
    m = (s + e) // 2
    if m ** 2 == n:
        print(m)
        break
    elif m ** 2 > n:
        e = m - 1
    elif m ** 2 < n:
        s = m + 1