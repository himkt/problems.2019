

N = int(input())
A = list(map(int, input().split()))
A.append(A[0])
B = [0 for _ in range(len(A)-1)]


for i in range(len(B)):
    B[i] = A[i+1] - A[i]

if len(set(B)) == 2:
    print('YES')
else:
    if len(set(B)) % 2 == 1:
        print('NO')
    else:
        print('YES')
