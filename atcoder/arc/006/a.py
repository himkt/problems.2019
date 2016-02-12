# -*- coding: utf-8 -*-

disp_values = {
        6: "1",
        5: "2",
        4: "4",
        3: "5",
        }

E = list(map(int, input().split()))
B = int(input())
L = list(map(int, input().split()))

eq = [e == l for e, l in zip(E, L)]
eq_count = eq.count(True)

if eq_count < 3:
    print(0)
elif eq_count != 5:
    print(disp_values[eq_count])
else:
    if E[eq.index(False)] == B:
        print(2)
    else:
        print(3)
