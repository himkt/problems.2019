# -*- coding: utf-8 -*-

N = int(input())
boss = list(int(input()) for _ in range(N-1))
sub = list([] for _ in range(N))
salary = list(1 for _ in range(N))


for i, b in enumerate(boss):
    sub[b-1].append(i+1)


for i in reversed(range(N)):
    if len(sub[i]) == 0:
        salary[i] = 1

    elif len(sub[i]) == 1:
        salary[i] = 2 * salary[sub[i][0]] + 1

    else:
        salary[i] = max(list(salary[k] for k in sub[i])) \
                + min(list(salary[k] for k in sub[i])) + 1


print(salary[0])
