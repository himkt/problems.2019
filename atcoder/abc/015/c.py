# -*- coding: utf-8 -*-
import itertools

N, K = map(int, input().split())

T = [list(map(int, input().split())) for _ in range(N)]

for s in itertools.product(range(K), repeat=N):
    r = 0
    for i in range(N):
        r ^= T[i][s[i]]
        if r == 0:
            print("Found")
            exit()

print("Nothing")
