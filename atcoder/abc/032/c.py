# -*- coding: utf-8 -*-
import functools
import operator
prod = functools.partial(functools.reduce, operator.mul)


def solve(s, i, j, k):
    if prod(s[i:j+1]) <= k:
        return j - i + 1
    else:
        return 0

n, k = map(int, input().split())
s = [int(input()) for _ in range(n)]

print(max([solve(s, i, j, k) for i in range(len(s)) for j in range(i+1, len(s))]))
