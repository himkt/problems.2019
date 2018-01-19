
a, b = map(int, input().split())
s = input()

try:
    int(s[:a])
    int(s[a+1])

except Exception:
    print('No')
    exit()

if s[a] == '-':
    print('Yes')

else:
    print('No')
