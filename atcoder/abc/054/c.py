
n, m = map(int, input().split())
a = list(0 for _ in range(m))
b = list(0 for _ in range(m))

for i in range(m):
    _a, _b = map(int, input().split())
    a[i] = _a
    b[i] = _b

g = list(list(0 for j in range(n)) for i in range(n))

for _a, _b in zip(a, b):
    g[_a-1][_b-1] = 1
    g[_b-1][_a-1] = 1

d = list(0 for i in range(n))

for i in range(n):
    d[i] = len([e for e in g[i] if e == 1])

nb_odd = 0
nb_even = 0

for i in range(n):
    if d[i] % 2 == 0:
        nb_even += 1
    else:
        nb_odd += 1


print(d)
print(g)
print(nb_even)
print(nb_odd)

if nb_odd == 2 or (nb_odd == 0 and nb_even > 0):
    pass

else:
    print(0)
