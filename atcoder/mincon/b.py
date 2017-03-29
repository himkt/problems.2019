

n, k = map(int, input().split())
A = sorted(list(map(int, input().split())))

topk = 0
ans = 0

for t in range(k):
    ans += A[topk] + t
    topk += 1

print(ans)
