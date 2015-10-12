# -*- coding: utf-8 -*-

Y = int(raw_input())

if Y % 4 == 0:
    if Y % 100 == 0:
        if Y % 400 == 0:
            print "YES"
        else:
            print "NO"
    else:
        print "YES"
else:
    print "NO"
