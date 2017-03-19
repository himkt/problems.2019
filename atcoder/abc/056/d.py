from itertools import chain
from itertools import combinations


def powerset(iterable):
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))


n, k = map(int, input().split())
A = list(map(int, input().split()))


ans = 0
for a in powerset(A):
    if sum(a) > k:
        ans += 1


print(ans)
