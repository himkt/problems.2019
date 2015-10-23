# -*- coding: utf-8 -*-


def get_Dir(Deg):
    if 11.25 <= Deg and Deg < 33.75:
        return "NNE"
    elif 33.75 <= Deg and Deg < 56.25:
        return "NE"
    elif 56.25 <= Deg and Deg < 78.75:
        return "ENE"
    elif 78.75 <= Deg and Deg < 101.25:
        return "E"
    elif 101.25 <= Deg and Deg < 123.75:
        return "ESE"
    elif 123.75 <= Deg and Deg < 146.25:
        return "SE"
    elif 146.25 <= Deg and Deg < 168.75:
        return "SSE"
    elif 168.75 <= Deg and Deg < 191.25:
        return "S"
    elif 191.25 <= Deg and Deg < 213.75:
        return "SSW"
    elif 213.75 <= Deg and Deg < 236.25:
        return "SW"
    elif 236.25 <= Deg and Deg < 258.75:
        return "WSW"
    elif 258.75 <= Deg and Deg < 281.25:
        return "W"
    elif 281.25 <= Deg and Deg < 303.75:
        return "WNW"
    elif 303.75 <= Deg and Deg < 326.25:
        return "NW"
    elif 326.25 <= Deg and Deg < 348.75:
        return "NNW"
    else:
        return "N"


def get_W(Dis):
    if 0.0 <= Dis and Dis <= 0.2:
        return 0
    elif 0.3 <= Dis and Dis <= 1.5:
        return 1
    elif 1.6 <= Dis and Dis <= 3.3:
        return 2
    elif 3.4 <= Dis and Dis <= 5.4:
        return 3
    elif 5.5 <= Dis and Dis <= 7.9:
        return 4
    elif 8.0 <= Dis and Dis <= 10.7:
        return 5
    elif 10.8 <= Dis and Dis <= 13.8:
        return 6
    elif 13.9 <= Dis and Dis <= 17.1:
        return 7
    elif 17.2 <= Dis and Dis <= 20.7:
        return 8
    elif 20.8 <= Dis and Dis <= 24.4:
        return 9
    elif 24.5 <= Dis and Dis <= 28.4:
        return 10
    elif 28.5 <= Dis and Dis <= 32.6:
        return 11
    elif 32.7 <= Dis:
        return 12


def round(num):
    i = num - float(str(num)[:-1])
    
    print i
    if float(str(i * 100)) >= 5:
        return float(str(num)[:-1]) + 0.1
    return float(str(num)[:-1])

deg, dis = map(float, raw_input().split())

Deg = deg / 10
Dis = round(dis / 60)

Dir = (get_Dir(Deg))
Dis = (get_W(Dis))

if Dis == 0:
    Dir = "C"

print("%s %s" % (Dir, Dis))
