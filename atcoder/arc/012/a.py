
day = input()

week = [
    'Sunday',
    'Monday',
    'Tuesday',
    'Wednesday',
    'Thursday',
    'Friday',
    'Saturday'
]

print(0 if day == 'Sunday' else len(week) - week.index(day) - 1)
