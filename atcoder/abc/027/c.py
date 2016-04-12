# -*- coding: utf-8 -*-

N = int(input())
depth = 0

while N > 0:
    depth += 1
    N //= 2


if depth % 2 == 0:
    print('Takahashi')
else:
    print('Aoki')
