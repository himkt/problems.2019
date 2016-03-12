# -*- coding: utf-8 -*-

num = int(raw_input())
str_list = ["a", "b", "c"]

for i in str_list:
    if num == 1:
        print "%s" % i
    for j in str_list:
        if num == 2:
            print "%s%s" % (i, j)
        for k in str_list:
            if num == 3:
                print "%s%s%s" % (i, j, k)
            for a in str_list:
                if num == 4:
                    print "%s%s%s%s" % (i, j, k, a)
                for b in str_list:
                    if num == 5:
                        print "%s%s%s%s%s" % (i, j, k, a, b)
                    for c in str_list:
                        if num == 6:
                            print "%s%s%s%s%s%s" % (i, j, k, a, b, c)
                        for d in str_list:
                            if num == 7:
                                print "%s%s%s%s%s%s%s" % (i, j, k, a, b, c, d)
                            for e in str_list:
                                if num == 8:
                                    print "%s%s%s%s%s%s%s%s" % (i, j, k, a, b, c, d, e)
