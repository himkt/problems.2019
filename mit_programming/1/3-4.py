# -*- coding: utf-8 -*-

x = 0.0
for i in range(10):
  x += 0.1
  print(x)
if x == 1.0:
  print("{}=1".format(x))
else:
  print("{} is not 1.0".format(x))
