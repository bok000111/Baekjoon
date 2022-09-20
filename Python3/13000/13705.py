from sys import stdin
from decimal import Decimal, getcontext

getcontext().prec = 100
pi = Decimal('3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679')

def sin(x):
    if -pi <= x <= pi:
        lasts, i, fact, sign, s, num = 0, 1, 1, 1, x, x
        while s != lasts:
            lasts = s
            i += 2
            fact *= i * (i - 1)
            num *= x * x
            sign *= -1
            s += num / fact * sign
        return +s
    elif x > pi:
        while x > pi:
            x -= 2 * pi
        return (sin(x))
    elif x < -pi:
        while x < -pi:
            x += 2 * pi
        return (sin(x))

a, b, c = map(Decimal, stdin.readline().strip().split())
s = c / a - Decimal('1')
e = c / a + Decimal('1')
while e - s > Decimal(1e-50):
    m = (s + e) /  2
    if a * m + b * Decimal(sin(m)) - c > 0:
        e = m
    elif a * m + b * Decimal(sin(m)) - c < 0:
        s = m
    else:
        break
print(round((s + e) / 2, 6))