
inp = input()
ans = 0

fit = 'CODEFESTIVAL2016'

for i in range(len(fit)):
    if fit[i] != inp[i]:
        ans += 1

print(ans)
