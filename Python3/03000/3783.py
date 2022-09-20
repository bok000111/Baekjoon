from sys import stdin
from decimal import Decimal, getcontext, ROUND_DOWN

getcontext().prec = 1000
n = int(stdin.readline().strip())
for i in range(n):
    num = Decimal(stdin.readline().strip())
    tmp = round(num**(Decimal(1) / Decimal(3)), 500)
    tmp = Decimal(tmp).quantize(Decimal('0.0000000001'), rounding=ROUND_DOWN)
    print(tmp)