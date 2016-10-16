
n, k = list(map(lambda x: int(x), input().split()))

ans = k * (k-1) ** (n-1)

print(ans)
