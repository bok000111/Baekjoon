from sys import stdin
from decimal import Decimal, getcontext

a, b = stdin.readline().strip().split()
getcontext().prec = 1111
print(f'{Decimal(a)**int(b):f}')