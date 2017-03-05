
x, y = list(map(int, input().split()))
ans = abs(abs(x) - abs(y))

if x < y:
    print(ans)
else:
    if y < x and x*y > 0:
        print(ans+2)
    else:
        print(ans+1)
