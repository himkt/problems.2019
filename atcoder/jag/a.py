

N = int(input())

res = list(input() for _ in range(N))

num_A = len(list(filter(lambda x: x == 'A', res)))

if res[0] == 'A' and res[-1] != 'A' and num_A == N // 2:
    print('YES')
else:
    print('NO')
