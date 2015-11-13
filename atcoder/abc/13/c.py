# -*- coding: utf-8 -*-

N, H = list(map(int, input().split()))
A, B, C, D, E = list(map(int, input().split()))

cost = 2147483647

for i in range(0, N+1):
    for j in range(0, N+1):
        if H + B*i + D*j - (N-i-j)*E > 0:# and N-i-j >= 0:

            # print("H: %s, B: %s, D: %s" % (H, B, D))
            # print("i: %s, j: %s, k: %s" % (i, j, N-i-j))
            # print(H + B*i + D*j + (N-i-j)*E)
            # print("%s-%s-%s" % (i, j, (N-i-j)))
            # print("cost: %s" % (A*i + C*j))

            if cost > A*i + C*j:
                cost = A*i + C*j

print(cost)
