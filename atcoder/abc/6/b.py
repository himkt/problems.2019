# -*- coding: utf-8 -*-


'''
def tribonacci(x):
    if x == 1: return 0
    if x == 2: return 0
    if x == 3: return 1
    return tribonacci(x-1) + tribonacci(x-2) + tribonacci(x-3)
'''


def tribonacci(x):
    arr = dict()
    arr[0], arr[1], arr[2] = 0, 0, 1
    for i in xrange(3, x):
        arr[i] = (arr[i-1] + arr[i-2] + arr[i-3]) % 10007
    return arr[x-1]

print tribonacci(int(raw_input()))
