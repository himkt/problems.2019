# -*- coding: utf-8 -*-

N   = int(input())
NG1 = int(input())
NG2 = int(input())
NG3 = int(input())

# とりあえず3を引く
# ダメだったら2を引く
# ダメだったら1を引く
# 繰り返す


def subtract(N):
    count = 0

    while count < 100:
        if N-3 == NG1 or N-3 == NG2 or N-3 == NG3:
            if N-2 == NG1 or N-2 == NG2 or N-2 == NG3:
                if N-1 == NG1 or N-1 == NG2 or N-1 == NG3:
                    return False
                else:
                    N -= 1
            else:
                N -= 2
        else:
            N -= 3
        count += 1

    if N > 0:
        return False
    else:
        return True

if N == NG1 or N == NG2 or N == NG3:
    print("NO")
else:
    if subtract(N):
        print("YES")
    else:
        print("NO")
