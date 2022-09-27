from sys import stdin

n = int(stdin.readline().rstrip())
arr = list(map(int, stdin.readline().rstrip().split()))
lis = [0]
for i in arr:
    if lis[-1] < i:
        lis.append(i)
    else:
        l = 0
        r = len(lis)
        while l < r:
            m = (l + r) // 2
            if lis[m] < i:
                l = m + 1
            else:
                r = m
        lis[r] = i
print(len(lis) - 1)