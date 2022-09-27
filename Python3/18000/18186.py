from sys import stdin

n, b, c = map(int, stdin.readline().strip().split())

f = list(map(int, stdin.readline().strip().split()))
f.append(0)
f.append(0)

p1 = b
p2 = b + c
p3 = b + 2 * c

ans = 0
if b > c:
    for i in range(n):
        if f[i + 1] > f[i + 2]:
            tmp = min(f[i], f[i + 1] - f[i + 2])
            ans += tmp * p2
            f[i] -= tmp
            f[i + 1] -= tmp
            tmp = min(f[i], f[i + 1], f[i + 2])
            ans += tmp * p3
            f[i] -= tmp
            f[i + 1] -= tmp
            f[i + 2] -= tmp
        else:
            tmp = min(f[i], f[i + 1], f[i + 2])
            ans += tmp * p3
            f[i] -= tmp
            f[i + 1] -= tmp
            f[i + 2] -= tmp
            tmp = min(f[i], f[i + 1])
            ans += tmp * p2
            f[i] -= tmp
            f[i + 1] -= tmp
        ans += f[i] * p1
else:
    ans = sum(f) * b

print(ans)