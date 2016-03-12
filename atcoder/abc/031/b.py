# -*- coding: utf-8 -*-

L, H = map(int, input().split())
N = int(input())
A = [int(input()) for _ in range(N)]

for a in A:
    if L <= a and a <= H:
        print(0)
    elif H < a:
        print(-1)
    else:
        print(L-a)
