N, M = map(int, input().split())

thread = list(N-i for i in range(N))
opened = list(False for _ in range(N+1))

for _ in range(M):
    thread.append(int(input()))


for t in reversed(thread):
    if not opened[t]:
        print(t)
        opened[t] = True
