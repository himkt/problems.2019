N = int(input())
A = list(map(int, input().split()))

score = [0, 0]

for t in range(len(A)):
    i = A.index(max(A))
    score[t % 2] += A[i]
    A[i] = 0

print(score[0])
