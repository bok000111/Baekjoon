from sys import stdin

def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

t = int(stdin.readline().rstrip())
for i in range(t):
    a, b, c = map(int, stdin.readline().rstrip().split())
    if c > a and c > b:
        print("NO")
    else:
        tmp = gcd(a, b)
        if tmp == 1 or c % tmp == 0:
            print("YES")
        else:
            print("NO")