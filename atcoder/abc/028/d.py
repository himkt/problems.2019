# -*- coding: utf-8 -*-

N, K = map(lambda item: int(item), raw_input().split(" "))
ans  = []

for i in xrange(1,N+1):
    for j in xrange(1,N+1):
        for k in xrange(1,N+1):
            ans.append([i,j,k])

n = len(ans)
c = 0

for item in ans:
    item.sort()
    if item[1] == K:
        c += 1

print float(c) / float(n)
