
N, A, B = map(int, input().split())
i = 0

while N > 0:
    if i % 2 == 0:
        N -= A
    else:
        N -= B
    i += 1

print('Bug' if i % 2 == 0 else 'Ant')
