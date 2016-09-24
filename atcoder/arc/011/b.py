
_ = input()
dictionary = dict()

dictionary['b'] = '1'
dictionary['c'] = '1'
dictionary['d'] = '2'
dictionary['w'] = '2'
dictionary['t'] = '3'
dictionary['j'] = '3'
dictionary['f'] = '4'
dictionary['q'] = '4'
dictionary['l'] = '5'
dictionary['v'] = '5'
dictionary['s'] = '6'
dictionary['x'] = '6'
dictionary['p'] = '7'
dictionary['m'] = '7'
dictionary['h'] = '8'
dictionary['k'] = '8'
dictionary['n'] = '9'
dictionary['g'] = '9'
dictionary['z'] = '0'
dictionary['r'] = '0'


output = ''

for char in list(input().lower()):
    if char == ' ':
        output += ' '

    if char in dictionary.keys():
        output += dictionary[char]

from re import sub

print(sub(r'(^\s+|\s+$)', '', sub(r'\s+', ' ', output)))
