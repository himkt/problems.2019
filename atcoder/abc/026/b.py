# -*- coding: utf-8 -*-
import math

N = int(input())
arr = []
ans = 0


for i in xrange(N):
  arr.append(int(input()))

arr.sort(reverse=True)

flag = True

for i in arr:
  if flag:
    ans += i ** 2
    flag = False
  else:
    ans -= i ** 2
    flag = True

print (ans*math.pi)
