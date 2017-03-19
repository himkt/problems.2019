

a, b = input().split()

H = True

if b == 'H':
    H = True
elif b == 'D':
    H = False

if a == 'D':
    H = not H

if H:
    print('H')
else:
    print('D')
