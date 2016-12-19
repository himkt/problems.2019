
N = int(input())
res = list()

for v in range(0, N+1):
    for a in range(0, N+1):
        b = v - a

        if b >= 0:
            u = a ^ b

            if 0 <= u <= N:
                res.append(('{}-{}'.format(u, v)))

print(len(set(res)))
