# -*- coding: utf-8 -*-

from math import sqrt


def sieve_of_eratosthenes(n):
    x = list(i for i in range(2, n+1))

    for j in range(2, int(sqrt(n)) + 1):
        x = list(filter(lambda x: x % j != 0 or x <= j, x))

    return x


def solve(n):
    res = sieve_of_eratosthenes(n)

    if len(res) > 10000:
        return res[10000]
    else:
        return solve(n + 10000)


if __name__ == '__main__':
    n = 10000
    print(solve(n))
