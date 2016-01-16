# -*- coding: utf-8 -*-
from fractions import gcd


def prime(n):
    table = [0] * (n + 1)
    prime_list = []
    for i in range(2, n + 1):
        if table[i] == 0:
            prime_list.append(i)
            for j in range(i + i, n + 1, i):
                table[j] = 1
    return prime_list


def lcm(a, b):
    return (a * b) // gcd(a, b)

a = int(input())
b = int(input())
n = int(input())
c = lcm(a, b)
d = min(prime(a) and prime(b))

print(d)

while True:
    if c >= n:
        print(c)
        break
    else:
        c *= d
# cがnより小さい時
# 最小公約数をかければよくね
