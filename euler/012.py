# -*- coding: utf-8 -*-


class TriangleNumber:

    def __init__(self):
        self.number = 1
        self.iter_num = 1

    def next(self):
        self.iter_num += 1
        self.number += self.iter_num

    def get_divisors(self):
        n = self.number
        divisors = list()
        for i in range(1, n // 2 + 1):
            if n % i == 0:
                divisors.append(i)

        divisors.append(n)
        return divisors


def solve(n):
    triangle = TriangleNumber()
    for _ in range(10000):
        triangle.next()
    for _ in range(n):
        triangle.next()
        print(triangle.number)
        print(triangle.get_divisors())
    # for _ in range(n):
    #     print(triangle.number)
    #     triangle.next()
    #     print(len(triangle.get_divisors()))
    #     if len(triangle.get_divisors()) >= 500:
    #         print(triangle.number)

if __name__ == '__main__':
    print(solve(100000))
