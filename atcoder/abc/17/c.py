# -*- coding: utf-8 -*-
N, M = map(int, input().split())
l, r, s = list(), list(), list()

for _ in range(N):
    elems = list(map(int, input().split()))
    l.append(elems[0])
    r.append(elems[1])
    s.append(elems[2])

print(l, r, s)
