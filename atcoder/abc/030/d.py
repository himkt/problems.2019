# -*- coding: utf-8 -*-

N, a = map(int, input().split())
k    = int(input()) % N
B    = list(map(int, input().split()))

now = a


for i in range(k):
    now = B[now - 1]

print(now)
