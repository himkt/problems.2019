# -*-coding: utf-8 -*-

input = map(float, raw_input().split())

x = input[0::2]
y = input[1::2]

v_a_x = x[1] - x[0]
v_a_y = y[1] - y[0]

v_b_x = x[2] - x[0]
v_b_y = y[2] - y[0]

print abs(v_a_x * v_b_y - v_a_y * v_b_x) / 2
