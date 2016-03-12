# -*- coding: utf-8 -*-

N, M = map(int, input().split())
X, Y = map(int, input().split())
A    = list(map(int, input().split()))
B    = list(map(int, input().split()))

now = 0
loc = "A"

a_i = 0
b_i = 0

count = 0

while True:
    print(now)

    if loc == "A":
        if now <= A[a_i]:
            now = A[a_i] + X
            loc = "B"
            count += 1
        a_i += 1

    if loc == "B":
        if now <= B[b_i]:
            now = B[b_i] + Y
            loc = "A"
            count += 1
        b_i += 1

    if len(A) <= a_i and len(B) <= b_i:
        break

print(count)

print(count // 2)
