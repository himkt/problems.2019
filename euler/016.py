# -*- coding: utf-8 -*-


def solve(a, e):
    n = pow(a, e)
    return sum(map(int, list(str(n))))


if __name__ == '__main__':
    print(solve(2, 1000))
