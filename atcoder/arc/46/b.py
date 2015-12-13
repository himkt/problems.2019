# -*- coding: utf-8 -*-

N = int(input())
A, B = list(map(int(input().split())))

if N % A == 0:
    print("Takahashi")
else:
    print("Aoki")
