from datetime import date, timedelta

y, m, d = map(int, input().split('/'))
date = date(y, m, d)


while 1:
    y = date.year
    m = date.month
    d = date.day

    if y % m == 0:
        ym = y / m
        if ym % d == 0:
            print("%02d/%02d/%02d" % (y, m, d))
            break

    date += timedelta(days=1)
