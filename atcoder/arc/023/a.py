
y = int(input())
m = int(input())
d = int(input())


def get_day(y, m, d):
    if m <= 2:
        y -= 1
        m += 12

    return ((y * 365) +
            (y // 4) -
            (y // 100) +
            (y // 400) +
            (306 * (m + 1) // 10) +
            d - 429)


print(get_day(2014, 5, 17) - get_day(y, m, d))
