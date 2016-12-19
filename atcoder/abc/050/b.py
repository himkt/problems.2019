
N = int(input())
T = list(map(int, input().split()))
M = int(input())

P, X = list(), list()

for m in range(M):
    p, x = list(map(int, input().split()))
    P.append(p)
    X.append(x)

ans = sum(T)

for m in range(M):
    arg = P[m] - 1
    val = X[m]

    print(ans - T[arg] + val)
