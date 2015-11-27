# -*- coding: utf-8 -*-
N, M = map(int, input().split())
im = [0 for _ in range(M+1)]

ans = 0

for _ in range(N):
    elems = list(map(int, input().split()))
    im[elems[0]-1] += elems[2]
    im[elems[1]] -= elems[2]
    ans += elems[2]

for i in range(len(im)):
    if i+1 < len(im):
        im[i+1] += im[i]

# 1番最小の区間を消せば、重複がなくなる
print(ans - min(im[:-1]))
