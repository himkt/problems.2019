N, M = map(int, input().split())
a = list(int(input()) for _ in range(N))

done = list()

for a_i in reversed(a):
    if a_i not in done:
        print(a_i)
        done.append(a_i)

for b_i in sorted(set(map(lambda x: x+1, range(N))) - set(a)):
    print(b_i)
