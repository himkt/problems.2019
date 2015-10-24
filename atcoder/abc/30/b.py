# -*- coding: utf-8 -*-

A, B = map(int, input().split())

C = B * 0.5

if A >= 12:
    A -= 12

A *= 30
B *= 6

ans = abs((A+C)-B)

if ans >= 180:
    print(360-ans)
else:
    print(ans)
