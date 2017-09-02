
s = input()
ss = [s_ for idx, s_ in enumerate(list(s)) if idx % 2 == 0]
print(''.join(ss))
