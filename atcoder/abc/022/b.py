# -*- coding: utf-8 -*-
N = int(input())
F = list()

for _ in range(N):
    F.append(int(input()))

print(len(F) - len(set(F)))
