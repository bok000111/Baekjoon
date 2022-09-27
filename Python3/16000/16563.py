from sys import stdin

n = int(stdin.readline().strip())
k = list(map(int, stdin.readline().rstrip().split()))
max = 5000000
sieve = [i for i in range(max + 1)]
for i in range(2, int(max ** 0.5)):
    if sieve[i] == i:
        for j in range(i * i, max + 1, i):
            if sieve[j] == j:
                sieve[j] = i

for i in k:
    while i > 1:
        print(sieve[i], end=' ')
        i //= sieve[i]
    print()