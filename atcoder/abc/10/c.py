# -*- coding: utf-8 -*-
import math


def judge(x, y):
    for x_i, y_i in zip(x, y):
        xx = math.fabs(((txa - x_i)**2 + (tya - y_i)**2) ** (1/2))
        yy = math.fabs(((txb - x_i)**2 + (tyb - y_i)**2) ** (1/2))
        distance = xx + yy
        if T*V >= distance:
            return "YES"
    return "NO"

txa, tya, txb, tyb, T, V = map(int, input().split())
n = int(input())
x = list()
y = list()
for i in range(n):
    x_i, y_i = map(int, input().split())
    x.append(x_i)
    y.append(y_i)

print(judge(x, y))
