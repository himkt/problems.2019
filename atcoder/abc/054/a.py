

a, b = list(map(int, input().split()))

if a == 1:
    a = 99

if b == 1:
    b = 99


if a > b:
    print('Alice')
elif a < b:
    print('Bob')
else:
    print('Draw')
