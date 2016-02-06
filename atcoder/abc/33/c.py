# -*- coding: utf-8 -*-

S = input()
Sd = S.split("+")
ans = 0

for s in Sd:
    if s.split("*").count("0") == 0:
        ans += 1

print(ans)
