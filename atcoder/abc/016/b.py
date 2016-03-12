# -*- coding: utf-8 -*-

A, B, C = map(int, input().split())

cond1 = A + B == C
cond2 = A - B == C

if cond1 or cond2:
    if cond1 and cond2:
        print("?")
    elif cond1:
        print("+")
    else:
        print("-")
else:
    print("!")
