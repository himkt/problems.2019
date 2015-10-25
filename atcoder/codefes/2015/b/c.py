# -*- coding: utf-8 -*-

N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

if M > N:
    print("NO")
    exit()

for b in B:
    flag = False
    for a in A:
        if b <= a:
            A.pop(A.index(a))
            flag = True
            break

    if not flag:
        print("NO")
        exit()

print("YES")
