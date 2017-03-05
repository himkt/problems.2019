
N = int(input())
X = list(map(int, input().split()))

ans = 0
for x in X:
    while x > 0:
        x = x - 2
        ans += 1

print(ans)
