# -*- coding: utf-8 -*-

N = int(input())
C = [int(c) for c in input()]

ans = list()

for answer in list(range(1, 5)):
    ans.append(C.count(answer))

print(max(ans), min(ans))
