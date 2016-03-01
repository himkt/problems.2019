# -*- coding: utf-8 -*-

from math import sqrt


def solve(n):
    return sum(sieve(n))


def sieve(n):
    limit = int(sqrt(n)) + 1
    result = list(range(2, n+1))

    for i in range(2, limit+1):
        result = list(filter(lambda x: x % i != 0 or x == i, result))

    return result


if __name__ == '__main__':

    n = 2 * pow(10, 6)
    print(solve(n))
