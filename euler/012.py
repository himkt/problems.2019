# -*- coding: utf-8 -*-


# get_factors :: int -> [int]
def get_factors(num):
    factors = list()

    for i in range(1, num // 2 + 2):
        if num % i == 0:
            factors.append(i)

    return factors + [num]


# triangler_num :: int -> int
def triangler_num(x):
    return (x * (x+1)) // 2


# solve :: None -> int
def solve():
    for x in range(1, 10000000000000000):
        num = triangler_num(x)
        if len(get_factors(num)) > 500:
            return num


if __name__ == '__main__':
    print(solve())
