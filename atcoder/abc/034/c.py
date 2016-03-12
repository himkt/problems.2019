# -*- coding: utf-8 -*-


def fac(N):
    ans = 1
    for n in range(1, N+1):
        ans *= n
    return ans
    # return N * fac(N-1) if N > 1 else 1


W, H = map(int, input().split())

W -= 1
H -= 1

J = min(W, H)
K = max(W, H)

ans = 1
for i in range(K+1, K+J+1):
    ans *= i


num = (ans // fac(J)) % 1000000007

print(num)
