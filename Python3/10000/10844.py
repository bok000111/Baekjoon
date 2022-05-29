m = []
for i in range(101):
    m.append([])
    for j in range(10):
        m[i].append('')
        
m[1][0] = 0
for i in range(1, 10):
    m[1][i] = 1

n = int(input())

for i in range(2, n + 1):
    for j in range(10):
        if j == 0:
            m[i][j] = m[i-1][1]
        elif j == 9:
            m[i][j] = m[i-1][8]
        else:
            m[i][j] = m[i-1][j-1] + m[i-1][j+1]

print(sum(m[n])%1000000000)