from collections import defaultdict

mat = defaultdict(lambda: defaultdict(int))
mat[0][1] = 0

ans = 0
_ = input()

for i, a in enumerate(map(lambda x: int(x), input().split())):
    mat[a-1][i] += 1
    mat[i][a-1] += 1

for i, vec in mat.items():
    for j, val in vec.items():
        ans += val // 2

print(ans // 2)
