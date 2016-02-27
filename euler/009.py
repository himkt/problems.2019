# -*- coding: utf-8 -*-
from functools import reduce


def get_pythagorean_triplet(n):
    return list(filter(lambda x: x[0] < x[1] < x[2] and x[0]**2 + x[1]**2 ==  x[2]**2, [(i, j, 1000-i-j) for i in range(1000) for j in range(1000 - i)]))[0]


def solve(n):
    return reduce(lambda x, y: x * y, get_pythagorean_triplet(n))


if __name__ == '__main__':
    print(solve(1000))
