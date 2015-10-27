# -*- coding: utf-8 -*-
import math
import matplotlib.pyplot as plt


def P(mean, var, x):

    denominator = pow(2 * math.pi * var, (1/2))
    numerator = math.exp(-1 * (x - mean)**2 / 2 * var)

    return numerator / denominator

for i in range(1000):
    plt.scatter(i/1000, P(0, 0.2, i/1000))

plt.show()
