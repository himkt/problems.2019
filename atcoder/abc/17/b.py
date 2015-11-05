# -*- coding: utf-8 -*-
import re

X = re.sub("(ch)|o|k|u", "", input())

if X == "":
    print("YES")
else:
    print("NO")
