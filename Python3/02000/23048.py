from sys import stdin

n = int(stdin.readline().strip())

sieve = [0 for i in range(n + 1)]
sieve[1] = 1
color = 1
for i in range(2, n + 1):
    if sieve[i] == 0:
        color += 1
        for j in range(i, n + 1, i):
            sieve[j] = color
print(color)
print(*sieve[1:])