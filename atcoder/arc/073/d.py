import collections

N, W = list(map(int, input().split()))
w = list()
v = list()

vals = collections.defaultdict(int)
for _ in range(N):
    __w, __v = list(map(int, input().split()))
    vals[__w] = max(vals[__w], __v)

for __w, __v in vals.items():
    w.append(__w)
    v.append(__v)

dp = [[0 for _ in range(W+1)] for _ in range(len(w)+1)]
N = len(w)
# print(w)
# print(dp)

for j in range(W):
    dp[0][j] = 0

for i in reversed(range(N)):
    for j in range(W+1):
        if j < w[i]:
            dp[i][j] = dp[i+1][j]

        else:
            dp[i][j] = max(dp[i+1][j],
                           dp[i+1][j-w[i]]+v[i])

# print(dp)
print(dp[0][W])
