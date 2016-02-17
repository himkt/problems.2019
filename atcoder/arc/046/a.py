# -*- coding: utf-8 -*-

N = int(input())


# int(n/9) + 2: 桁
# print(int(N / 9))

# N % 9 + 1: 数字
# print(N % 9)

if N % 9 == 0:
    print("9" * (int(N / 9)))
else:
    print(str(N % 9) * (int(N / 9) + 1))
