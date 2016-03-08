# -*- coding: utf-8 -*-


def collatz(n):
    return n // 2 if n % 2 == 0 else 3 * n + 1


def compute_product(start):
    ans = 1
    num = start
    # 4が得られたら打ち切る(product = そこまでの総積 * 2
    while 1:
        col_num = collatz(num)
        if col_num == 4:
            return ans * 8
        ans *= col_num
        num = col_num


if __name__ == '__main__':
    # 4が得られたら打ち切る(product = そこまでの総積 * 2
    result = [compute_product(start) for start in range(1, 1000001)]
    print(result.index(max(result))+1)
