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
    if 0.0 <= Dis and Dis <= 2:
        return 0
    elif 3 <= Dis and Dis <= 15:
        return 1
    elif 16 <= Dis and Dis <= 33:
        return 2
    elif 34 <= Dis and Dis <= 54:
        return 3
    elif 55 <= Dis and Dis <= 79:
        return 4
    elif 80 <= Dis and Dis <= 107:
        return 5
    elif 108 <= Dis and Dis <= 138:
        return 6
    elif 139 <= Dis and Dis <= 171:
        return 7
    elif 172 <= Dis and Dis <= 207:
        return 8
    elif 208 <= Dis and Dis <= 244:
        return 9
    elif 245 <= Dis and Dis <= 284:
        return 10
    elif 285 <= Dis and Dis <= 326:
        return 11
    elif 327 <= Dis:
        return 12


deg, dis = map(float, raw_input().split())

Deg = deg / 10
Dis = round(dis / 60 * 10)

Dir = (get_Dir(Deg))
Dis = (get_W(Dis))

if Dis == 0:
    Dir = "C"

print("%s %s" % (Dir, Dis))
