N = int(input())
A = list(map(int, input().split()))

# init
ans = -1000000000

for i in range(N):
    score = []
    for j in range(N):
        if i == j:
            continue
        if i > j:
            subA = A[j:i+1]
        else:
            subA = A[i:j+1]

        # aoki select left one
        score.append((sum(subA[1::2]), -j, sum(subA[::2])))

    # maximize aoki score
    _, _, ans_i = max(score)

    # update answer
    ans = max(ans, ans_i)

print(ans)
