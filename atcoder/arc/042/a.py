# -*- coding: utf-8 -*-

N, M = map(lambda x: int(x), raw_input().split(" "))

call = []

for i in xrange(M):
    call.append(int(raw_input()))

call.reverse()

for elem in call:

    print elem
