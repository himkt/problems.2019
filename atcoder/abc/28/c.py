# -*- coding: utf-8 -*-

nums = map(lambda item: int(item), raw_input().split(" "))
sums = []

for i in xrange(0, 3):
    for j in xrange(1, 4):
        for k in xrange(2, 5):
            if i != j and j != k and k != i:
                sums.append(nums[i]+nums[j]+nums[k])


sums.sort()
print sums[-3]
