from sys import stdin

n = int(stdin.readline().strip())

f = list(map(int, stdin.readline().strip().split()))
f.append(0)
f.append(0)
ans = 0

for i in range(n):
    if f[i + 1] > f[i + 2]:
        tmp = min(f[i], f[i + 1] - f[i + 2])
        ans += tmp * 5
        f[i] -= tmp
        f[i + 1] -= tmp
        tmp = min(f[i], f[i + 1], f[i + 2])
        ans += tmp * 7
        f[i] -= tmp
        f[i + 1] -= tmp
        f[i + 2] -= tmp
    else:
        tmp = min(f[i], f[i + 1], f[i + 2])
        ans += tmp * 7
        f[i] -= tmp
        f[i + 1] -= tmp
        f[i + 2] -= tmp
        tmp = min(f[i], f[i + 1])
        ans += tmp * 5
        f[i] -= tmp
        f[i + 1] -= tmp
    ans += f[i] * 3

print(ans)