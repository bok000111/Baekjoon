from sys import stdin
from collections import deque

M, N, O, P, Q, R, S, T, U, V, W = map(int, stdin.readline().strip().split())

dir = []
for i in range(11):
    dir.append([0 if j != i else 1 for j in range(11)])
    dir.append([0 if j != i else -1 for j in range(11)])

graph = [[[[[[[[[[list(map(int, stdin.readline().strip().split())) for i in range(N)] for i in range(O)] for i in range(P)] for i in range(Q)] for i in range(R)] for i in range(S)] for i in range(T)] for i in range(U)] for i in range(V)] for i in range(W)]

q = deque()

for i1 in range(W):
    for i2 in range(V):
        for i3 in range(U):
            for i4 in range(T):
                for i5 in range(S):
                    for i6 in range(R):
                        for i7 in range(Q):
                            for i8 in range(P):
                                for i9 in range(O):
                                    for i10 in range(N):
                                        for i11 in range(M):
                                            if graph[i1][i2][i3][i4][i5][i6][i7][i8][i9][i10][i11] == 1:
                                                q.append((i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11))

while q:
    now = q.popleft()

    for i in dir:
        tmp = [now[j]+i[j] for j in range(11)]

        if 0<=tmp[0]<W and 0<=tmp[1]<V and 0<=tmp[2]<U and 0<=tmp[3]<T and 0<=tmp[4]<S and 0<=tmp[5]<R and 0<=tmp[6]<Q and 0<=tmp[7]<P and 0<=tmp[8]<O and 0<=tmp[9]<N and 0<=tmp[10]<M and graph[tmp[0]][tmp[1]][tmp[2]][tmp[3]][tmp[4]][tmp[5]][tmp[6]][tmp[7]][tmp[8]][tmp[9]][tmp[10]] == 0:
            graph[tmp[0]][tmp[1]][tmp[2]][tmp[3]][tmp[4]][tmp[5]][tmp[6]][tmp[7]][tmp[8]][tmp[9]][tmp[10]] = graph[now[0]][now[1]][now[2]][now[3]][now[4]][now[5]][now[6]][now[7]][now[8]][now[9]][now[10]]+1
            q.append((tmp[0], tmp[1], tmp[2], tmp[3], tmp[4], tmp[5], tmp[6], tmp[7], tmp[8], tmp[9], tmp[10]))

res = 1
flag = 1

for i1 in range(W):
    if flag == 0:
        break
    for i2 in range(V):
        if flag == 0:
            break
        for i3 in range(U):
            if flag == 0:
                break
            for i4 in range(T):
                if flag == 0:
                    break
                for i5 in range(S):
                    if flag == 0:
                        break
                    for i6 in range(R):
                        if flag == 0:
                            break
                        for i7 in range(Q):
                            if flag == 0:
                                break
                            for i8 in range(P):
                                if flag == 0:
                                    break
                                for i9 in range(O):
                                    if flag == 0:
                                        break
                                    for i10 in range(N):
                                        if flag == 0:
                                            break
                                        for i11 in range(M):
                                            if flag == 0:
                                                break
                                            if graph[i1][i2][i3][i4][i5][i6][i7][i8][i9][i10][i11] == 0:
                                                res = 0
                                                flag = 0
                                            res = max(res, graph[i1][i2][i3][i4][i5][i6][i7][i8][i9][i10][i11])

print(res-1)