# -*- coding: utf-8 -*-

dif = 2025 - int(input())

for i in range(1, 10):
    for j in range(1, 10):
        if i * j == dif:
            print("%s x %s" % (i, j))
