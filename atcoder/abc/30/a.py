# -*- coding: utf-8 -*-

A, B, C, D = map(int, input().split())

if A/B > C/D:
    print("AOKI")
elif A/B < C/D:
    print("TAKAHASHI")
else:
    print("DRAW")
