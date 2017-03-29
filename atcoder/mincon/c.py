from collections import Counter


def solve():

    if len(S) == K:
        return ''

    for til in range(1, max(lenS)+1):
        label = Counter([s[0:til] for s in S if len(s) >= til])

        for key, count in label.items():
            if count == K:
                return key

    return -1


N, K = map(int, input().split())
A = map(int, input().split())
S = [input() for _ in range(N)]
lenS = [len(s) for s in S]

print(solve())
