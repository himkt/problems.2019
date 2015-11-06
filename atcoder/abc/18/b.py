# -*- coding: utf-8 -*-

S = input()
N = int(input())
l = list()
r = list()

for n in range(N):
    li, ri = map(int, input().split())
    S = "%s%s%s" % (S[:li-1], S[li-1:ri][::-1], S[ri:])

print(S)
