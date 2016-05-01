from re import search

S = input()

print(search("\d{1,2}", S).group())
