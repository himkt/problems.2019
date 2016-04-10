N = int(input())
A = list(int(input()) for _ in range(N))

rank = list(set(A))
rank.sort()

for a in A:
    print(rank.index(a))
