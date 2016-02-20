# -*- coding: utf-8 -*-

from math import sqrt


def solve(n):
    return max(primes(n))


def primes(n):
    i = 2
    res = []
    while i <= sqrt(n) + 1:
        while n % i == 0:
            n //= i
            res.append(i)
        i += 1
    if n > 1:
        res.append(n)
    return res

if __name__ == '__main__':
    print(solve(600851475143))
