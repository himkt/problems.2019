# -*- coding: utf-8 -*-

from collections import Counter

value_dict = {
        "A": 4,
        "B": 3,
        "C": 2,
        "D": 1,
        "F": 0
        }

N = int(input())
R = [gpa for gpa in input()]

ans = 0

for grade, num_subjects in Counter(R).items():
    ans += value_dict[grade] * num_subjects

print(ans / N)
