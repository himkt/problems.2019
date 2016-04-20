N, M = map(int, input().split())
a = sorted(list(int(input()) for _ in range(N)), reverse=1)

prv = 0

for a_i in reversed(a):
    if prv != a_i:
        print(a_i)
        prv = a_i

for b_i in sorted(set(map(lambda x: x+1, range(N))) - set(a)):
    print(b_i)
