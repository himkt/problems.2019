# -*- coding: utf-8 -*-


# 通過したところは数字にする
def bfs(sy, sx, turn):
    queue = list()
    queue.append((sx-1, sy-1))
    c[sx-1][sy-1] = turn

    while True:
        current = queue.pop(0)
        sx = current[0]
        sy = current[1]

        if c[sx][sy-1] == ".":
            c[sx][sy-1] = c[sx][sy] + 1
            queue.append((sx, sy-1))
        if c[sx][sy+1] == ".":
            c[sx][sy+1] = c[sx][sy] + 1
            queue.append((sx, sy+1))
        if c[sx-1][sy] == ".":
            c[sx-1][sy] = c[sx][sy] + 1
            queue.append((sx-1, sy))
        if c[sx+1][sy] == ".":
            c[sx+1][sy] = c[sx][sy] + 1
            queue.append((sx+1, sy))

        if len(queue) == 0:
            break

R, C = map(int, input().split())
sy, sx = map(int, input().split())
gy, gx = map(int, input().split())
c = list()
turn = 0
for i in range(R):
    c.append(list(input()))

bfs(sy, sx, turn)
print(c[gy-1][gx-1])
