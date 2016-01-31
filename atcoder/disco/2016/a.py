# -*- coding: utf-8 -*-

output = 'DiscoPresentsDiscoveryChannelProgrammingContest2016'

i = 0
N = int(input())

line = ""

for o in output:
    if i == N-1:
        line += "%s\n" % o
        i = 0
    else:
        line += o
        i += 1

print(line.rstrip())
