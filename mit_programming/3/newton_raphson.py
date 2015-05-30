# -*- coding: utf-8 -*-

epsilon = 0.01
k = 24.0

# guess start from k/2
guess = k / 2.0

# k is original number
while abs(guess*guess-k) >= epsilon:
  # differential calculation
  guess = guess-(((guess**2)-k)/(2*guess))

print("Square root of {} is about {}".format(k,guess))
