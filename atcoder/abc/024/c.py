
N, D, K = map(int, input().split())
L = list()
R = list()
S = list()
T = list()
ans = list(0 for _ in range(K))

for d in range(D):
    l, r = map(int, input().split())
    L.append(l)
    R.append(r)

for k in range(K):
    s, t = map(int, input().split())
    S.append(s)
    T.append(t)


# for each stage
for d in range(D):

    print(S)
    print(T)


    # for each people
    for k in range(K):

        if (S[k] == T[k]):
            continue

        if (L[d] <= T[k] and T[k] <= R[d]):
            S[k] = T[k]
            ans[k] += 1

        elif (abs(T[k] - L[d]) < abs(T[k] - R[d])):
            S[k] = L[d]
            ans[k] += 1

        elif (abs(T[k] - L[d]) > abs(T[k] - R[d])):
            S[k] = R[d]
            ans[k] += 1

print(ans)
