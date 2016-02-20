# -*- coding: utf-8 -*-


def solve(n):
    # list comprehension
    return sum(a_n for a_n in fibnacci(n) if a_n % 2 == 0)


def fibnacci(n):
    a = [1, 2]
    while 1:
        a_n = a[-1] + a[-2]
        if a_n > n:
            return a
        a.append(a_n)

if __name__ == '__main__':
    print(solve(4000000))
