# -*- coding: utf-8 -*-


N = int(input())
P = list(map(int, input().split()))
max_score = sum(P)

dp = [False] * (max_score + 1)
dp[0] = True

for i in range(N):
    p = P.pop()
    for j in reversed(range(max_score)):
        if j + p > max_score:
            continue
        if dp[j]:
            dp[j + p] = True


print(dp.count(True))
