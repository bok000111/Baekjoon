from sys import stdin

A = list(stdin.readline().strip())
B = list(stdin.readline().strip())
A_len = len(A)
B_len = len(B)
res = [[0 for i in range(B_len + 1)] for j in range(A_len + 1)]

for i in range(1, A_len + 1):
    for j in range(1, B_len + 1):
        if A[i - 1] == B[j - 1]:
            res[i][j] = res[i - 1][j - 1] + 1
        else:
            res[i][j] = max(res[i][j - 1], res[i - 1][j])

print(res[A_len][B_len])