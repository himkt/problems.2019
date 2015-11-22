N = int(input())
A = list(map(int, input().split()))

# init
ans = -1000000000

for i in range(N):
    score = []
    for j in range(N):
        if i == j:
            continue

        ii, jj = min(i, j), max(i, j)+1
        subA = A[ii:jj]
        # for regulation that aoki select left one
        score.append((sum(subA[1::2]), -jj, sum(subA[::2])))
    # maximize aoki score
    _, _, ans_i = max(score)
    # update answer
    ans = max(ans, ans_i)

print(ans)
