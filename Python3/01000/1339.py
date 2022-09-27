from sys import stdin

n = int(stdin.readline().rstrip())
dict = {}
for i in range(n):
    a = stdin.readline().rstrip()
    l = len(a)
    for j in range(l):
        if a[j] in dict:
            dict[a[j]] += 10 ** (l - j - 1)
        else:
            dict[a[j]] = 10 ** (l - j - 1)
tmp = list(dict.values())
tmp.sort(reverse=True)
ans = 0
num = 9
for i in tmp:
    ans += i * num
    num -= 1
print(ans)