

_ = input()
a = list(map(int, input().split()))
counter = {}

for a_ in a:
    if a_ in counter.keys():
        counter[a_] += 1
    else:
        counter[a_] = 1

ans = 1
cnt = 0

counter = sorted(counter.items(), key=lambda x: x[0],
                 reverse=True)

for k, v in counter:
    while v >= 2:
        if cnt == 2:
            break

        ans *= k
        cnt += 1
        v -= 2

if cnt != 2:
    print(0)
else:
    print(ans)
