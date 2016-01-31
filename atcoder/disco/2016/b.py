# -*- coding: utf-8 -*-

N = int(input())
A = list(map(int, input().split()))
B = [y for x, y in enumerate(A) if A[:x+1].count(y) == 1]
C = list(set(B))

count = 1
old_point = 0
iter_num = 0

for i in C:
    if old_point > B.index(i):
        if iter_num != 0:
            count += 1
    old_point = B.index(i)
    iter_num += 1

print(count)
