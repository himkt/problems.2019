# -*- coding: utf-8 -*-

N = int(input())
S = list()
P = list()

for _ in range(N):
    elem = input().split()
    S.append(elem[0])
    P.append(int(elem[1]))

if(max(P) > sum(P)/2):
    print(S[P.index(max(P))])
else:
    print("atcoder")
