

s = input()
for i in range(len(s)-1):
    sd = s[0:len(s)-i-1]
    if len(sd) % 2:
        continue

    sdd = sd[0:len(sd)//2]
    if sdd+sdd == sd:
        print(len(sd))
        break
