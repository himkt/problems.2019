# -*- coding: utf-8 -*-

N = int(input())
A = list(map(int, input().split()))
ans = list()

for i in range(len(A)):
    a = A[i]
    while True:
        if a % 2 == 0:
            a //= 2
        else:
            ans.append(a)
            break

print(len(set(ans)))
