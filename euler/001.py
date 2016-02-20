# -*- coding: utf-8 -*-

def solve(n):
    #  It is very useful to use list comprehension
    return sum(i for i in range(n) if i % 3 == 0 or i % 5 == 0)

if __name__ == '__main__':
    print(solve(1000))
