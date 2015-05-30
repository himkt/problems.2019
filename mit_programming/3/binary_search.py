# -*- coding: utf-8 -*-

x = float(input())
epsilon = 0.000000001
numGuesses = 0
low = 0.0
high = x
ans = (high + low)/2.0

while abs(ans**2-x) >= epsilon:
  print("low: {}, high: {} ans: {}".format(low, high, ans))
  numGuesses += 1
  if ans**2<x:
    low = ans
  else:
    high = ans
  ans = (high + low)/2.0

print("numGuesses: {}".format(numGuesses))
print("{} is close to square root of {}".format(ans, x))
