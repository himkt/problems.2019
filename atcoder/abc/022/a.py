# -*- coding: utf-8 -*-

N, S, T = map(int, input().split())
W = int(input())
A = [0 for _ in range(N)]
A[0] = W

v = 0
for i in range(1, N):
    v += int(input())
    A[i] = W + v

print(len(list(filter(lambda x: x >= S and T >= x, A))))
