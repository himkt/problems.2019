# -*- coding: utf-8 -*-
from collections import Counter as cnt

N, M = map(int, input().split())
A = list(map(int, input().split()))

count = cnt(A).most_common()


if len(count) == 1:
    print("%s" % count[0][0])
else:
    if count[0][1] == count[1][1]:
        print("?")
    else:
        if count[0][1] > N / 2:
            print("%s" % count[0][0])
        else:
            print("?")
