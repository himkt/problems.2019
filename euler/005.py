# -*- coding; utf-8 -*-
from functools import reduce


def solve(n):
    elements = list(i for i in range(1, n+1))
    ans = product(elements)

    for element in elements:
        if ans / element % element == 0:
            ans //= element
    return ans


def product(elements):
    return reduce(lambda x, y: x * y, elements)


if __name__ == '__main__':
    print(solve(20))
