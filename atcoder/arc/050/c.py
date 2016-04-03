from fractions import gcd


def lcm(a, b):
    return (a*b)/gcd(a, b)


a, b, M = map(int, input().split())

A = int('1' * a)
B = int('1' * b)

print(int((A * B) % M))
