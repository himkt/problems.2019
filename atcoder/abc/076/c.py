
def match(s_, t_):
    for s__, t__ in zip(s_, t_):
        if s__ == '?':
            continue

        if s__ != t__:
            return False

    return True


s = input()
t = input()

lens = len(s)
lent = len(t)

cnds = []

for i in range(lens-lent+1):
    if match(s[i:i+len(t)], t):
        matched = s[:i] + t + s[i+len(t):]
        matched = matched.replace('?', 'a')
        cnds.append(matched)

if len(cnds) == 0:
    print('UNRESTORABLE')

else:
    print(list(sorted(cnds))[0])
