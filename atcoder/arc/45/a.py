# -*- coding: utf-8 -*-
import re

S = raw_input()

S = re.sub("Left", "<", S)
S = re.sub("Right", ">", S)
S = re.sub("AtCoder", "A", S)

print S
