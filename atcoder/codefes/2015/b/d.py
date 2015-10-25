# -*- coding: utf-8 -*-

N = int(input())
S = list()
C = list()

for i in range(N):
    item = list(map(int, input().split()))
    S.append(item[0])
    C.append(item[1])

print(S)
print(C)
