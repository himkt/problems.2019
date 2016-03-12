# -*- coding: utf-8 -*-

S = input()
ans = ""
prev = ""
stack = list()

for s in S:
    if s != prev:
        if (len(stack) != 0):
            ans += "%s%s" % (stack[0], len(stack))
        stack = list()
        stack.append(s)
    else:
        stack.append(s)
    prev = s

ans += "%s%s" % (stack[0], len(stack))
print(ans)
