from sys import stdin

q1 = list(stdin.readline().strip())
q2 = []
str = list("PPAP")
s_len = len(str)
for i in q1:
    q2.append(i)
    if len(q2) >= s_len and q2[-s_len:] == str:
        for i in range(s_len):
            q2.pop()
        q2.append('P')

if len(q2) == 1 and q2[0] == 'P':
    print("PPAP")
else:
    print("NP")
