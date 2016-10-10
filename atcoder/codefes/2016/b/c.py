
def prim():
    for i in range((w+1) * (h+1)):
        mincost.append(1001001001)
        used.append(False)

        mincost[0] = 0
        res = 0


    while 1:
        v = -1

        for u in range((w+1) * (h+1)):
            print(u)
            if not used[u] and (v == -1 or mincost[u] < mincost[v]):
                v = u

        if v == -1:
            break

        used[v] = True
        res += mincost[v]

        for u in range((w+1) * (h+1)):
            mincost[u] = min(mincost[u], cost(v, u))

    return res



w, h = list(map(lambda x: int(x), input().split()))
v = (w+1) * (h+1)

p = list()
q = list()

for i in range(w):
    p.append(int(input()))

for i in range(h):
    q.append(int(input()))

ans = 0
_id = 0



cost = list(0 for _ in range(v))


for i in range(w+1):
    for j in range(h+1):
        11























print(cost)

# encode : 2次元のデータを1次元のグラフにエンコード（idを振ってやる）
# solve  : プリム法でやる

mincost = list()
used = list()

print(prim())
