
_, _ = map(int, input().split())
L = list(map(int, input().split()))
R = list(map(int, input().split()))

ans = 0

for l in L:
    if l in R:
        R.remove(l)
        ans += 1

print(ans)
