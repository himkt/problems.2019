
a, b, c = list(map(lambda x: int(x), input().split()))

if a + b == c or b + c == a or c + a == b:
    print('Yes')
else:
    print('No')
