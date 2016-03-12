# -*- coding: utf-8 -*-


def b(s, t):
    for i, k in zip(s, t):
        if i != k:
            if i == "@" or k == "@":
                if i == "@":
                    if k not in replacable_list:
                        return False
                if k == "@":
                    if i not in replacable_list:
                        return False
            else:
                return False
    return True

s = list(raw_input())
t = list(raw_input())

replacable_list = ["a", "t", "c", "o", "d", "e", "r"]

if b(s, t):
    print "You can win"
else:
    print "You will lose"
