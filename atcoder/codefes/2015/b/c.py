# -*- coding: utf-8 -*-

N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()
A.reverse()
B.sort()
B.reverse()

i = 0

if M > N:
    print("NO")
    exit()

for b in B:
    if b <= A[i]:
        i += 1

if i == len(B):
    print("YES")
else:
    print("NO")
