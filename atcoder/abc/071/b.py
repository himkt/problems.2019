

s = input()
s = set(list(s))

ans = 'None'

for alpha in list('abcdefghijklmnopqrstuvwxyz'):
    if alpha not in s:
        ans = alpha
        break

print(ans)
