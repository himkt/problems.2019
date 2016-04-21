from itertools import permutations


N, M, L = map(int, input().split())
P, Q, R = map(int, input().split())
SIZE = [P, Q, R]

ans = max(
        (N // SIZE[indices[0]]) *
        (M // SIZE[indices[1]]) *
        (L // SIZE[indices[2]])
        for indices in permutations(range(3))
        )


print(ans)
