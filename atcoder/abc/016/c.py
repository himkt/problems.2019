# -*- coding: utf-8 -*-

N, M = map(int, input().split())

G = list([0 for _ in range(N)] for _ in range(N))
A = list([0 for _ in range(N)] for _ in range(N))


def search(arr, res=[]):
    if 1 in arr:
        index = arr.index(1)
        arr[index] = 0
        res.append(index)
        return search(arr, res)
    return res

for _ in range(M):
    i, j = map(int, input().split())
    G[i-1][j-1] = 1
    G[j-1][i-1] = 1


print(G)

for i in range(N):
    ans = 0
    for j in range(i):
        if i == j:
            continue

        indices_i = search(G[i], [])# | s.t. G[i] = 1
        indices_j = search(G[j], [])# | s.t. G[j] = 1

        A[i][j] += len(indices_i and indices_j)


print(A)
