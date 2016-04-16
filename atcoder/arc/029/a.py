n = int(input())
t = list(int(input()) for _ in range(n))

a, b = 0, 0

for t_i in sorted(t, reverse=1):
    if a < b:
        a += t_i
    else:
        b += t_i

print(max(a, b))
