
N, K = map(int, input().split())
t = list(int(input()) for _ in range(N))

for i in range(len(t)-2):
    if t[i] + t[i+1] + t[i+2] < K:
        print(i+3)
        exit()

print(-1)
