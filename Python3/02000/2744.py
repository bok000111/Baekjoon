from sys import stdin

a = str(stdin.readline().strip())
b = [i.lower() if i.isupper() else i.upper() for i in a]

print(*b, sep='')