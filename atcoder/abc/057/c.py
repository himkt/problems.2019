import math


N = int(input())
Nsq = int(math.sqrt(N)) + 1
ans = 10**9

for n in range(1, Nsq):
    if N % n == 0:
        A = n
        B = N // n

        F = max(len(str(B)), len(str(A)))
        ans = min(ans, F)


print(ans)
