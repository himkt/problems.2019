# -*- coding: utf-8 -*-

n, X = map(int, input().split())
A = list(map(int, input().split()))
ans = 0

for i in range(10000000):
    shift = X >> i
    if shift == 0:
        break
    if shift % 2 == 1:
        ans += A[i]


print(ans)
