from re import match

S = input()

if match('.*[Ii].*[Cc].*[Tt]', S):
    print('YES')
else:
    print('NO')
