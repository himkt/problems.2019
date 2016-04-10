# -*- coding: utf-8 -*-

N = int(input())
s = list()

for i in range(N):
    s.append(list(input()))

for i in range(N):
    out = ''
    for j in range(N):
        out += s[N-j-1][i]

    print(out)
