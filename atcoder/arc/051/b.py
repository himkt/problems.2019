
a, b = 1, 0

for k in range(int(input()) + 1):
    a, b = b, a + b

print("%s %s" % (a, b))
