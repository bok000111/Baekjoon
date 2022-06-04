from sys import stdin
from collections import deque
import string

t = int(stdin.readline().strip())

for i in range(t):
    p = list(stdin.readline().strip())
    n = int(stdin.readline().strip())
    if n == 0:
        num = []
        a = stdin.readline()
    else:
        num = deque(map(int, stdin.readline().strip(string.punctuation+'\n').split(',')))
    flag = 1
    if p.count('D') > len(num):
        print('error')
        continue

    flag = 1
    for i in p:
        if i == 'R':
            flag ^= 1
        else:
            if flag:
                num.popleft()
            else:
                num.pop()

    if flag:
        print('[', end='')
        print(*list(num), sep=',', end=']\n')
    else:
        print('[', end='')
        print(*list(reversed(num)), sep=',', end=']\n')