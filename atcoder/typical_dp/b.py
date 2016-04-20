A, B = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))


dp = [[0] * (B+1)] * (A+1)
sm = [[0] * (B+1)] * (A+1)


for i in range(len(dp)):
    if i > 0:
        sm[i][0] = sm[i-1][0] + a[A-i]

    for j in range(len(dp[i])):
        if j > 0:
            sm[i][j] = sm[i][j-1] + b[B-j]

        if i > 0:
            dp[i][j] = sm[i][j] - dp[i-1][j]

        if j > 0:
            dp[i][j] = max(dp[i][j], sm[i][j] - dp[i][j-1])


print(dp[A][B])
