n, x = map(int, input().split())
h = list(map(int, input().split()))
graph = [[] for _ in range(n)]

for k in range(n - 1):
    a, b = map(int, input().split())
    graph[a - 1].append(b - 1)
    graph[b - 1].append(a - 1)


def dfs(ima, mae):
    r = 0
    for tsugi in graph[ima]:
        if mae == tsugi:
            continue
        r += dfs(tsugi, ima)

    print(h)
    print(h[ima])

    if r == 0 and h[ima] == 0:
        return 0
    else:
        r += 2
    return r

print(max(dfs(x - 1, -1) - 2, 0))
