# -*- coding: utf-8 -*-


def f(N):
    for n in xrange(0, N+1):
        for nn in xrange(0, N-n+1):
            nnn = N - n - nn
            if 2*n + 3*nn + 4*nnn == M:
                return "%s %s %s" % (n, nn, nnn)
    return "-1 -1 -1"

N, M = map(int, raw_input().split())
print f(N)
