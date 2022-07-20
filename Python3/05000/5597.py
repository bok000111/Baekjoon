from sys import stdin

n = [x for x in range(1, 31)]

for i in range(28):
    n.remove(int(stdin.readline().strip()))

print(n[0])
print(n[1])