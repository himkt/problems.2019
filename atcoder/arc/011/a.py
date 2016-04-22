
m, n, N = map(int, input().split())
current = N
ans = N

for _ in range(10000):
    created = n * (current // m)
    ans += created
    current = (current % m) + created


print(ans)
