# -*- coding: utf-8 -*-

N, K = map(int, raw_input().split())
R = sorted(map(int, raw_input().split()))[N-K:]

ans = 0.0

for r in R:
    ans += r
    ans /= 2

print ans
