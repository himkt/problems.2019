# -*- coding: utf-8 -*-
# いもす法

max_size = 1000001
arr = [0 for i in range(max_size+1)]

for i in range(int(input())):
    st, en = map(int, input().split())
    arr[st] += 1
    arr[en+1] -= 1

for i in range(max_size):
    arr[i+1] += arr[i]

print(max(arr))
