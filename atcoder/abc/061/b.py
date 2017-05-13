n, m = list(map(int, input().split()))

dic = {k: 0 for k in range(n)}
for _ in range(m):
    a, b = list(map(int, input().split()))
    dic[a-1] += 1
    dic[b-1] += 1

for key in sorted(dic.keys()):
    print(dic[key])
