
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

    # for each people
    for k in range(K):
        if (S[k] == T[k]):
            continue

        ans[k] += 1

        if L[d] <= S[k] and S[k] <= R[d]:

            if (L[d] <= T[k] and T[k] <= R[d]):
                S[k] = T[k]

            elif (abs(T[k] - L[d]) < abs(T[k] - R[d])):
                S[k] = L[d]

            elif (abs(T[k] - L[d]) > abs(T[k] - R[d])):
                S[k] = R[d]

for a in ans:
    print(a)
