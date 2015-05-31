# -*- coding: utf-8 -*-

def selSort(L):
  suffixStart = 0
  while suffixStart != len(L):
    # check all the value of suffixstart
    for i in range(suffixStart,len(L)):
      if L[i] < L[suffixStart]:
        L[suffixStart],L[i] = L[i],L[suffixStart]
    suffixStart += 1
