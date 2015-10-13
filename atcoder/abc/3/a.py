# -*- coding: utf-8 -*-


def E(x):
    return sum([i * 10000.0 / x for i in xrange(1, x+1)])

print int(E(int(raw_input())))
