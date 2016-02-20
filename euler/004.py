# -*- coding: utf-8 -*-


def is_palindrome(n):
    n_str = str(n)
    return n_str == n_str[::-1]


def solve():
    return max(
            i*j for i in range(999, 0, -1) for j in range(999, 0, -1)
            if is_palindrome(i*j)
            )


if __name__ == '__main__':
    print(solve())
