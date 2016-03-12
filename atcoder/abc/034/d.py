# -*- coding: utf-8 -*-
from itertools import combinations


N, K = map(int, input().split())
w = list()
p = list()
ans = 0

for i in range(N):
    elem = list(map(int, input().split()))
    w.append(elem[0])
    p.append(elem[1])

for pattern in list(combinations(range(N), K)):
    g = sum(w[i] * (p[i] / 100) for i in pattern)
    wa = sum(w[i] for i in pattern)
    ans = max(ans, g / wa)

print(ans * 100)
