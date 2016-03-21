# -*- coding: utf-8 -*-


def compute_cost(i, x_j, y_j):
    return c[i] * max(abs(x[i] - x_j), abs(y[i] - y_j))


N = int(input())

x = list()
y = list()
c = list()

for _ in range(N):
    elem = list(map(int, input().split()))
    x.append(elem[0])
    y.append(elem[1])
    c.append(elem[2])

tmp_x = 0
tmp_y = 0

for i in range(len(x)):
    tmp_x += x[i] * c[i]
    tmp_y += y[i] * c[i]

x_j = tmp_x / len(x)
y_j = tmp_y / len(y)

for i in range(len(x)):
    print(compute_cost(i, x_j, y_j))
