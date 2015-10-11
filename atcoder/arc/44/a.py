# -*- coding: utf-8 -*-


def is_prime(n):
    for i in xrange(2, N):
        if N % i == 0:
            return False
    return True

N = int(raw_input())

if is_prime(N):
    if N == 1:
        print "Not Prime"
    else:
        print "Prime"
else:
    _sum = 0
    for char in str(N):
        _sum += int(char)

    if (
            int(char) == 1 or
            int(char) == 3 or
            int(char) == 7 or
            int(char) == 9 and
            _sum % 3 != 0
            ):
        print "Prime"
    else:
        print "Not Prime"
