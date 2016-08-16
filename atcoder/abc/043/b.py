from re import search, sub

def update(s):
    if (search(r'[01]B', s)):
        return update(sub(r'[01]B', '', s))
    else:
        return s.replace('B', '')


print(update(input()))
