
a, b = map(int, input().split())
ans = a * b
ans -= a
ans -= b
ans += 1
print(ans)
