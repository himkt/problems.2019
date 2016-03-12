# -*- coding: utf-8 -*-

c = []

for i in xrange(4):
    c.append(raw_input().split())

for i in xrange(4):
    c[len(c) - i - 1].reverse()
    print " ".join(c[len(c) - i - 1])
