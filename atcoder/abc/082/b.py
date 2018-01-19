

s = list(input())
t = list(input())

st = ''.join(sorted(s))
tt = ''.join(sorted(t, reverse=True))

if st < tt:
    print('Yes')
else:
    print('No')
