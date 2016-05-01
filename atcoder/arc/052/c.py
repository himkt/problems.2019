
N, M = map(int, input().split())

C = []
A = []
B = []

for i in range(M):
    elem = list(map(int, input().split()))
    C.append(elem[0])
    A.append(elem[1])
    B.append(elem[2])


for k in range(N):
    dp = []
