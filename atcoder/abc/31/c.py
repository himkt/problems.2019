N = int(input())
a = list(map(int, input().split()))
takahashi = list()
aoki      = list()

for i in range(N):

    aa_list = list()

    for j in range(N):
        if i == j:
            continue
        elif i < j:
            aa_list.append(a[i:j+1])
        else:
            aa_list.append(a[j:i+1])

    aa_cost = [sum(aa[::2]) for aa in aa_list]
    jj = aa_cost.index(max(aa_cost))

    if i == jj:
        continue
    elif i < jj:
        takahashi.append(sum(a[i:jj+1][::2]))
        aoki.append(sum(a[i:jj+1][1::2]))
    elif jj < i:
        takahashi.append(sum(a[jj:i+1][::2]))
        aoki.append(sum(a[jj:i+1][1::2]))


# if aoki.count(max(aoki)) == 1:
if aoki.count(max(aoki)) != len(aoki):
    # print(takahashi[aoki.index(max(aoki))])
    print(max(aoki))
else:
    aokis = max(aoki)
    i = 0
    ans = list()

    for aoki_a in aoki:
        if aokis == aoki_a:
            ans.append(takahashi[i])
        i += 1
    print(max(ans))
