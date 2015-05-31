# -*- coding: utf-8 -*-

def merge(left,right,compare):
  '''
  a
  '''
  result = []
  i,j = 0,0

  while i < len(left) and j < len(right):
    if compare(left[i],right[i]):
      result.append(left[i])
      i += 1
    else:
      result.append(right[i])
      j += 1
    while i < len(left):
      result.append(left[i])
      i += 1
    while j < len(right):
      result.append(right[j])
      j += 1
    return result

import operator

def mergeSort(L,compare=operator.lt):
  """aaa
  """
  if len(L) < 2:
    return L[:]
  else:
    middle = len(L)//2
    left = mergeSort(L[:middle],compare)
    right = mergeSort(L[:middle],compare)
    return merge(left,right,compare)

