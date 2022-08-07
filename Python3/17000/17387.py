from sys import stdin

def ccw(crd1, crd2, crd3):
    return (crd2[0]-crd1[0])*(crd3[1]-crd1[1])-(crd3[0]-crd1[0])*(crd2[1]-crd1[1])

c1 = [0, 0]
c2 = [0, 0]
c3 = [0, 0]
c4 = [0, 0]

c1[0], c1[1], c2[0], c2[1] = map(int, stdin.readline().strip().split())
c3[0], c3[1], c4[0], c4[1] = map(int, stdin.readline().strip().split())

ccw_1 = ccw(c1, c2, c3)*ccw(c1, c2, c4)
ccw_2 = ccw(c3, c4, c1)*ccw(c3, c4, c2)

l1 = [c1, c2]
l1.sort(key=lambda x:x[0])
l2 = [c3, c4]
l2.sort(key=lambda x:x[0])

if ccw_1 <= 0 and ccw_2 <= 0:
    if ccw_1 == 0 and ccw_2 == 0:
        if (min(c1[0], c2[0])<=max(c3[0], c4[0]))and(max(c1[0], c2[0])>=min(c3[0], c4[0]))and(min(c1[1], c2[1])<=max(c3[1], c4[1]))and(min(c3[1], c4[1])<=max(c1[1], c2[1])):
            print(1)
        else:
            print(0)
    else: print(1)
else:
    print(0)