

W, a, b = list(map(int, input().split()))

if a < b:
    ans = b - (a + W)
    if ans < 0:
        print(0)
    else:
        print(ans)

else:
    ans = a - (b + W)
    if ans < 0:
        print(0)
    else:
        print(ans)
