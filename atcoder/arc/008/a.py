# -*- coding: utf-8 -*-

N = int(input())

# 1個だけのたこ焼きを買うかどうか

a = 100 * (N // 10 + 1)
b = (100 * (N // 10)) + (15 * (N % 10))

print(min(a, b))
