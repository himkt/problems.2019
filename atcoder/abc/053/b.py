

s = input()
sd = s[::-1]

print(len(s) - sd.index('Z') - s.index('A'))
