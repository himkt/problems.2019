# -*- coding: utf-8 -*-

elems = list(i for i in range(1, 101))
elements_sq = list(i ** 2 for i in range(1, 101))

print(sum(elems) ** 2 - sum(elements_sq))
