# -*- coding: utf-8 -*-

N = int(input())
A = list(map(int, input().split()))

if sum(A) % N != 0:
    print(-1)
    exit()


mean = sum(A) / N
island = [0 for i in range(N)]
sum = 0
cost = 0

for i in range(N - 1):
    sum += A[i]
    if sum != (i + 1) * mean:
        cost += 1

print(cost)
