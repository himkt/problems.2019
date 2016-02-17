# -*- coding: utf-8 -*-

N, L = map(int, input().split())
S = list(input())

ans = 0
tab = 1

for s in S:
    if s == '+':
        if tab == L:
            ans += 1
            tab = 1
        else:
            tab += 1
    else:
        tab -= 1

print(ans)
