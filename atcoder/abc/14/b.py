# -*- coding: utf-8 -*-

n, X = list(map(int, input().split()))
A = list(map(int, input().split()))
ans = 0

for i, j in zip(A, format(X, "b")):
    if (j == "1"):
        try:
            ans += i
        except:
            break

print(ans)
