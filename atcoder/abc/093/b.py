

a, b, k = map(int, input().split())

result = []

for i in range(k):
    result.append(a + i)

for i in range(k):
    result.append(b - k + i + 1)

for c in sorted(list(set(result))):
    if a <= c <= b:
        print(c)
