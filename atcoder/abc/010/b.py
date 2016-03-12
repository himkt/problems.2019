# -*- coding: utf-8 -*-

S = int(raw_input())
A = map(int, raw_input().split())
ans = 0

for a in A:
    while a % 2 == 0 or a % 3 == 2:
        ans += 1
        a -= 1

print ans
