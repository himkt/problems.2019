import re


s = input()
t = input()

ss = s + s
if re.search(t, ss):
    print('Yes')

else:
    print('No')
