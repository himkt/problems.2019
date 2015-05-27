# -*- coding: utf-8 -*-

x = 123456

# a tolerancean ( acceptable) error range
epsilon = 0.01
step = epsilon**2

numGuesses = 0
ans = 0.0
while abs(ans**2 - x) >= epsilon and ans**2 <= x:
  ans += step
  numGuesses += 1
  print("numGuesses = {}".format(numGuesses))
if abs(ans**2 - x) >= epsilon:
  print("Failed on square root: {}".format(x))
else:
  print("{} is close to square root of {}".format(ans,x))
