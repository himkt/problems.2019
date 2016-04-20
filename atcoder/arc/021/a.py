

A = [0] * 4

for i in range(4):
    A[i] = list(map(int, input().split()))


for i in range(len(A)):
    for j in range(len(A[0])):
        a = A[i][j]

        if j > len(A[0]):
            if a == A[i][j+1]:
                print('CONTINUE')
                exit()

        if j > 0:
            if a == A[i][j-1]:
                print('CONTINUE')
                exit()

        if i > len(A):
            if a == A[i+1][j]:
                print('CONTINUE')
                exit()

        if i > 0:
            if a == A[i-1][j]:
                print('CONTINUE')
                exit()

print('GAMEOVER')
