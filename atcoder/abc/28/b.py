# -*- coding: utf-8 -*-

import collections

S = raw_input()

ans = {'A':0,'B':0,'C':0,'D':0,'E':0,'F':0}

words = [i for i in S]

count = dict(collections.Counter(words))

for key, count in count.items():
    ans[key] = count


print " ".join(map(lambda item: str(item), [ans[key] for key in sorted(ans)]))
