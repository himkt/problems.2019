import sys
sys.setrecursionlimit(10000000)

d = 10**9 + 7


def factorial(n):
    if (n > 1):
        return (n % d) * factorial(n - 1)
    return 1


n, m = map(int, input().split())

if abs(n - m) <= 1:
    ans = (factorial(n) % d) * (factorial(m) % d)
    ans %= d
    if n == m:
        ans *= 2

    # ans %= d
    print(ans)

else:
    print(0)
