
n, m = map(int, input().split())

aa = []
bb = []

for _ in range(m):
    a, b = map(int, input().split())
    if a == 1:
        aa.append(b)

    if b == n:
        bb.append(a)

aa = set(aa)
bb = set(bb)

ret = aa & bb

if len(ret) == 0:
    print("IMPOSSIBLE")
else:
    print("POSSIBLE")
