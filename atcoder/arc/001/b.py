
A, B = map(int, input().split())
ans = 0

simulate = lambda a: [B - a+1, B - a+5, B - a+10, B - a-1, B - a-5, B - a-10]

print(min(abs(simulate(A))))
