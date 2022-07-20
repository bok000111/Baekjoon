from sys import stdin

n = list(stdin.readline().strip().split('-'))
m = []
for i in n:
    m.append(sum(list(map(int, i.split('+')))))

print(2 * m[0] - sum(m))