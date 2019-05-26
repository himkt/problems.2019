

def is_month(mm):
    if 1 <= mm <= 12:
        return True
    return False


s = input()
yy, mm = s[:2], s[2:]
yy = int(yy)
mm = int(mm)


if is_month(yy) and is_month(mm):
    print('AMBIGUOUS')
elif is_month(yy):
    print('MMYY')
elif is_month(mm):
    print('YYMM')
else:
    print('NA')
