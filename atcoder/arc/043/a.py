# -*- coding: utf-8 -*-
# @author = himkt
# @create = 2015/08/15

from statistics import mean


def solve(N, A, B, S):
    max_s = max(S)
    min_s = min(S)
    p = B / (max_s - min_s)
    q = A - p * mean(S)
    return "%s %s" % (p, q)


N, A, B = map(int, input().split())
S = []

for i in range(N):
    S.append(int(input()))


try:
    print(solve(N, A, B, S))
except:
    print(-1)
