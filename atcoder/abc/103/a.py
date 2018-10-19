
a = list(map(int, input().split()))
a = sorted(a)
ans = 0

b = [abs(a[i+1] - a[i]) for i in range(len(a)-1)]
print(sum(b))
