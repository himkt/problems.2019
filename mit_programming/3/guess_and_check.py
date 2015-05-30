# -*- coding: utf-8 -*-
from math import fabs
import random

'''
guess and check algorithm
'''

def gac(x,g):
  # convergence condition
  if fabs(x - g**2) < 0.000000000001:
    return g
  else:
    # reset g
    g = (g + x/g)/2
    # recursive call
    return gac(x,g)

# let variables
x   = int(input())
g   = random.randint(1, x)

# answer
ans = gac(x,g)

print(ans)

