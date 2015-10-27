# -*- coding: utf-8 -*-

N = int(input())
A = list()

for i in range(N):
    A.append(int(input()))

ANS = list(set(A))
ANS.sort(reverse=True)

print(ANS[1])
