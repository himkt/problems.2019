# -*- coding: utf-8 -*-
from collections import Counter

N = int(input())
S = [input() for i in range(N)]
cnt = Counter(S)

print(cnt.most_common(n=1)[0][0])
