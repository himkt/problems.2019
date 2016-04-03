# -*- coding: utf-8 -*-

# 不等式でO(1)で解けるんだろうなぁ


R, B = map(int, input().split())
x, y = map(int, input().split())


def take_red(R, B):
    if R-x < 0 or B-1 < 0:
        raise Exception
    return R - x, B - 1


def take_blue(R, B):
    if R-1 < 0 or B-y < 0:
        raise Exception
    return R - 1, B - y


# greedy
ans = 0

while True:
    print(R, B)
    if R >= B:
        try:
            R, B = take_red(R, B)
            ans += 1
        except:
            try:
                R, B = take_blue(R, B)
                ans += 1
            except:
                print(ans)
                break
    else:
        try:
            R, B = take_blue(R, B)
            ans += 1
        except:
            try:
                R, B = take_red(R, B)
                ans += 1
            except:
                print(ans)
                break
