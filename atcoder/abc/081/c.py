import collections

n, k = map(int, input().split())
a = list(map(int, input().split()))
c = collections.Counter(a)
c = sorted(c.items(), key=lambda k: k[1],
           reverse=True)

size = len(c)
if size > k:
    ans = sum([v for _, v in c[k:]])
    print(ans)

else:
    print(0)
