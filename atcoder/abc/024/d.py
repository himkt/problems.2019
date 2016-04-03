# -*- coding: utf-8 -*-


A = int(input()) % 1000000007
B = int(input()) % 1000000007
C = int(input()) % 1000000007

r = (B*C - A*C) / (A*B - B*C + A*C)
c = (B*C - A*B) / (A*C - B*C + A*B)

print("%d %d" % (r, c))
