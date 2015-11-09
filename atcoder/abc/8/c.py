# -*- coding: utf-8 -*-
import itertools

def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n-1)

def get_count(c):
    c_v = [1 for i in range(N)]
    for i in range(len(c)):
        for j in range(i+1, len(c)):
            if c[j] % c[i] == 0:
                if c_v[j] == 1:
                    c_v[j] = 0
                else:
                    c_v[j] = 1
    return c_v.count(1)

N = int(input())
C = [int(input()) for i in range(N)]
sum_count = 0

for c in list(itertools.permutations(C)):
    sum_count += get_count(c)

print(sum_count/factorial(N))
