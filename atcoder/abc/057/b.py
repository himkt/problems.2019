
def amin(_data):
    ans = 0
    dst = 1000000000

    for idx, point in enumerate(checks):
        # x = abs(point[0] - _data[0])
        # y = abs(point[1] - _data[1])
        x = abs(_data[0] - point[0])
        y = abs(_data[1] - point[1])

        _dst = x + y

        if _dst < dst:
            ans = idx + 1
            dst = _dst

    return ans



N, M = list(map(int, input().split()))
points = list()
checks = list()

for _ in range(N):
    data = list(map(int, input().split()))
    points.append(data)

for _ in range(M):
    data = list(map(int, input().split()))
    checks.append(data)

for point in points:
    print(amin(point))
