# -*- coding: utf-8 -*-

N, H = list(map(int, input().split()))
A, B, C, D, E = list(map(int, input().split()))
cost = 0

for x in range(N):
    for y in range(N):
        if H + B*x + D*y - (N-x-y)*E > 0:
            if x + y == N:
                print(A * x, C * y)

print(cost)
