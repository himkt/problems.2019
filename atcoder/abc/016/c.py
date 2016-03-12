# -*- coding: utf-8 -*-

N, M = map(int, input().split())
adjacent = [[0 for i in range(N)] for i in range(N)]

for i in range(M):
    f, t = map(int, input().split())
    adjacent[f-1][t-1] = 1

print(adjacent)
