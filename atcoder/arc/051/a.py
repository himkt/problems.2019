
x1, y1, r = map(int, input().split())
x2, y2, x3, y3 = map(int, input().split())

flag = False

for x in [x2, x3]:
    for y in [y2, y3]:
        if pow(x1 - x, 2) + pow(y1 - y, 2) <= pow(r, 2):
            flag = True
            break


if flag:
    print('YES')
else:
    print('NO')
