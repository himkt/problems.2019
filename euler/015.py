# -*- coding: utf-8 -*-


def factorial(n):
    return 1 if n == 1 else n * factorial(n-1)


# We can get answer by (a!* b!) / (a+b)!
def solve(a, b):
    return factorial(a+b) / (factorial(a) * factorial(b))


if __name__ == '__main__':
    print(int(solve(20, 20)))
