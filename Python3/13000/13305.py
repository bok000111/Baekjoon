from sys import stdin

n = int(stdin.readline())
dis = list(map(int, stdin.readline().strip().split()))
p = list(map(int, stdin.readline().strip().split()))

low_price = p[0]
res = 0

for i in range(n-1):
    if low_price >= p[i]:
        low_price = p[i]
    
    res += low_price * dis[i]

print(res)