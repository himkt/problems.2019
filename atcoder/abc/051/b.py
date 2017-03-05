
k, s = map(int, input().split())
ans = 0

for x in range(k+1):
    for y in range(s-x+1):
        z = s - x - y
        if x <= k and y <= k and z <= k:
            ans += 1

print(ans)
