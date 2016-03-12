# -*- coding: utf-8 -*-

i = int(raw_input())
count = 0

for j in xrange(i):
    for k in str(j+1):
        if k == "1":
            count += 1

print count
