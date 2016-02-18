# -*- coding: utf-8 -*-


def is_prime(n):
    for i in range(2, N):
        if N % i == 0:
            return False
    return True

N = int(input())

if is_prime(N):
    if N == 1:
        print("Not Prime")
    else:
        print("Prime")
else:
    tail = list(str(N))[-1]

    if (
            int(tail) == 5 or
            int(tail) % 2 == 0 or
            sum(list(map(int, str(N)))) % 3 == 0
            ):
        print("Not Prime")
    else:
        print("Prime")
