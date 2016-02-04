# -*- coding: utf-8 -*-


def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def lcm(a, b):
    return a * b // gcd(a, b)


a = int(input())
b = int(input())
n = int(input())

ans = lcm(a, b)
i = 1

while ans * i < n:
    i += 1

print(ans*i)
