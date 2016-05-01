
K, M = map(int, input().split())

ans = 0

for N in range(1, M+1):

    mod = N % K
    sum_n = sum(map(int, list(str(N)))) % K

    if mod == sum_n:
        ans += 1

print(ans)
