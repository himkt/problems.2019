
N, Q = map(int, input().split())
X = list()
R = list()
H = list()

S = 0

for i in range(N):
    x, r, h = map(int, input().split())
    X.append(x)
    R.append(r)
    H.append(h)

    S += (1/3) * r * h

A = list()
B = list()

for i in range(Q):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)


print(S)
