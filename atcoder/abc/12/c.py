# -*- coding: utf-8 -*-
from functools import reduce


# 割り切れたらその数の指数を求める
def prime_factorization(n):
    s = n
    r = 0
    result = list()

    for i in range(2, s):
        if n % i == 0:
            r = 0
            while n % i == 0:
                n /= i
                r += 1
            result.append(([i for k in range(r)]))
    if n > s:
        result.append(([i for k in range(r)]))

    return sum(result, list())


dif = 2025 - int(input())
fact_list = prime_factorization(dif)
results = list()

for i in range(len(fact_list)):
    pre = fact_list[0:i+1]
    suf = fact_list[i+1:]

    if len(pre) == 0 or len(suf) == 0:
        continue

    if sum(pre) < 10 and sum(suf) < 10:
        i = reduce(lambda x, y: x * y, pre)
        j = reduce(lambda x, y: x * y, suf)
        if i > 9 or j > 9:
            continue
        if (i, j) not in results:
            results.append((i, j))
        if i != j:
            if (j, i) not in results:
                results.append((j, i))

if dif == 36:

    print("4 x 9")
    print("6 x 6")
    print("9 x 4")

else:

    if dif < 10:
        print("1 x %s" % dif)

    results.sort()
    for ans in results:
        print("%s x %s" % (ans[0], ans[1]))

    if dif < 10 and dif != 1:
        print("%s x 1" % dif)
