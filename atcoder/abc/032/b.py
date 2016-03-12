# -*- coding: utf-8 -*-

s = input()
k = int(input())

print(len(set([s[i:i+k] for i in range(0, len(s) - k + 1)])))
