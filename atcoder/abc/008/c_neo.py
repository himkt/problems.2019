# -*- coding: utf-8 -*-

N = int(input())
C = [int(input()) for i in range(N)]
ans = 0

for c_i in C:
    divs = sum(c_i % c_j == 0 for c_j in C) - 1
    ans += (divs + 1) // 2 / (divs + 1)

print(N - ans)
