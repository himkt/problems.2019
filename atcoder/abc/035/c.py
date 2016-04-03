# -*- coding: utf-8 -*-

N, Q = map(int, input().split())

board = [0] * (N+1)

for _ in range(Q):
    l, r = map(int, input().split())
    board[l-1] += 1
    board[r] -= 1

num_sum = 0

for i in range(len(board)):
    d = board[i]
    board[i] += num_sum
    num_sum += d


print(''.join(list(map(lambda p: '0' if p % 2 == 0 else '1', board[:-1]))))
