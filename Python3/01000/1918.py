from sys import stdin
from collections import deque

q = deque(list(stdin.readline().strip()))
ans = deque()
while q:
    tmp = q.popleft()
    if tmp  == '(':
        ans.append(tmp)
    elif tmp == '*' or tmp == '/':
        while ans and (ans[-1] == '*' or ans[-1] == '/'):
            print(ans.pop(), end='')
        ans.append(tmp)
    elif tmp == '+' or tmp == '-':
        while ans and ans[-1] != '(':
            print(ans.pop(), end='')
        ans.append(tmp)
    elif tmp == ')':
        while ans and ans[-1] != '(':
            print(ans.pop(), end='')
        ans.pop()
    else:
        print(tmp, end='')
while ans:
    print(ans.pop(), end='')