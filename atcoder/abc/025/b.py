# -*- coding: utf-8 -*-

N, A, B = map(int, raw_input().split())
input = dict()
ans = 0

for n in xrange(N):
    s, d = raw_input().split()
    d = int(d)
    if B < d: d = B
    if d < A: d = A
    if s == "West": d = -1 * d
    ans += d


if ans < 0:
    print "West %s" % (-1 * ans)
elif ans > 0:
    print "East %s" % ans
else:
    print "0"
