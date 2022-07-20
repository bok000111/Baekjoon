from sys import stdin

n = int(stdin.readline().strip())

a = list(map(int, stdin.readline().strip().split()))

print(a.count(int(stdin.readline().strip())))