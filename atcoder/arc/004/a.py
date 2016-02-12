# -*- coding: utf-8 -*-

from math import sqrt

def compute_distance(coordinate1, coordinate2):
    return sqrt((coordinate1[0]-coordinate2[0])**2 + (coordinate1[1]-coordinate2[1])**2)

N = int(input())
xy = [list(map(int, input().split())) for _ in range(N)]

print(max([compute_distance(xy[i], xy[j]) for i in range(N) for j in range(i+1, N)]))
