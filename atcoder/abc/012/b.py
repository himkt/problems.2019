# -*- coding: utf-8 -*-

N = int(input())

h = N//3600
N -= h * 3600
m = N//60
N -= m * 60

print("%s:%s:%s" % (str(h).zfill(2), str(m).zfill(2), str(N).zfill(2)))
