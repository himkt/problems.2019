
N, x = list(map(int, input().split()))
a = list(map(int, input().split()))
ans = 0

def need_to_eat(a, i):
    return a[i] + a[i+1] > x


for i in range(N-1):
    while need_to_eat(a, i):
        a[i+1] -= 1
        ans += 1

print(ans)
