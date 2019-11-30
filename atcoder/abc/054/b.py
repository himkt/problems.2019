n, m = list(map(int, input().split()))
a = ["" for i in range(n)]
b = ["" for i in range(m)]

for i in range(n):
    a[i] = list(input())

for i in range(m):
    b[i] = list(input())

ans = False

for i in range(n - m + 1):
    for j in range(n - m + 1):
        _a = a[i : i + len(b)]
        _a = list(map(lambda x: x[j : j + len(b)], _a))

        if b == _a:
            ans = True

if ans:
    print("Yes")
else:
    print("No")
