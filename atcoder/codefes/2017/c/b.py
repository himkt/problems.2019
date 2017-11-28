
n = int(input())
a = list(map(int, input().split()))
ans = 3 ** n

neg = 1
for a_i in a:
    if a_i % 2 == 0:
        neg *= 2

print(ans - neg)
