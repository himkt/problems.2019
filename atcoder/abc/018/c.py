# -*- coding: utf-8 -*-

R, C, K = map(int, input().split())
S = [input().rstrip() for _ in range(R)]

cnt = 0
for x in range(K-1, R-K+1):
    for y in range(K-1, C-K+1):
        for i in range(max(x-K-1, 0), min(x+K, R)):
            for j in range(max(y-K-1, 0), min(y+K, C)):
                if abs(i-x)+abs(j-y) <= K-1:
                    if (i >= R or j >= C) or (S[i][j] == 'x'):
                        cnt += 1

print(cnt)
