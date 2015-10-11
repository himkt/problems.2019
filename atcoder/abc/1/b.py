km = float(input()) / 1000

if km < 0.1:
    print "00"
elif 0.1 <= km and km <= 5:
    if km < 1:
        print "0%s" % str(km)[-1]
    else:
        print int(km*10)
elif 6 <= km and km <= 30:
    print int(km + 50)
elif 35 <= km and km <= 70:
    print int((km - 30) / 5 + 80)
else:
    print 89
