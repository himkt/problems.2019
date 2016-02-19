# -*- coding: utf-8 -*-

disp_values = {
        6: "1",
        5: "2",
        4: "4",
        3: "5",
        }

E = set(map(int, input().split()))
B = int(input())
L = set(map(int, input().split()))

eq_count = len(E & L)

if eq_count < 3:
    print(0)
elif eq_count != 5:
    print(disp_values[eq_count])
else:
    if B in L:
        print(2)
    else:
        print(3)
