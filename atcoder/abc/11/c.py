# -*- coding: utf-8 -*-


def subtract(N):
    for i in range(100):
        if N-3 in NG:
            if N-2 in NG:
                if N-1 in NG:
                    return False
                else:
                    N -= 1
            else:
                N -= 2
        else:
            N -= 3
    return N <= 0


N = int(input())
NG = [int(input()) for i in range(3)]
if N in NG:
    print("NO")
else:
    if subtract(N):
        print("YES")
    else:
        print("NO")
