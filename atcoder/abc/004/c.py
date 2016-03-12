# -*- coding: utf-8 -*-

c = [1, 2, 3, 4, 5, 6]

N = int(raw_input())% 30
I = list(xrange(N))

for i in I:
    s = (i % 5)
    t = (i % 5) + 1
    tmp = c[s]
    c[s] = c[t]
    c[t] = tmp

print "".join(map(str, c))
