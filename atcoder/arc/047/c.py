# -*- coding: utf-8 -*-
from itertools import permutations
from math import factorial

N, K = map(int, input().split())

index = int(factorial(N) / K)

for i in list(permutations(list(range(N))))[index-1]:
    print(i+1)
