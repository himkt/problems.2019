# -*- coding: utf-8 -*-

def search(L,e):
  def bSearch(L,e,low,high):
    if high == low:
      return L[low] == e
    
    # 整数
    mid = (low+high)//2

    if L[mid] == e:
      return True
    elif L[mid] > e:
      return False
    else:
      return bSearch(L,e,low,mid-1)
    
    if len(L) == 0:
      return False
    else:
      return bSearch(L,e,0,len(L)-1)
