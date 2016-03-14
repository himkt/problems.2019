# -*- coding: utf-8 -*-


def solve(n):
    return sum(len(num2char(i)) for i in range(1, n+1))


def num2char(n):
    num_char_dic = {
            '0': '',
            '00': '',
            '1': 'one',
            '2': 'two',
            '3': 'three',
            '4': 'four',
            '5': 'five',
            '6': 'six',
            '7': 'seven',
            '8': 'eight',
            '9': 'nine',
            '10': 'ten',
            '11': 'eleven',
            '12': 'twelve',
            '13': 'thirteen',
            '14': 'fourteen',
            '15': 'fifteen',
            '16': 'sixteen',
            '17': 'seventeen',
            '18': 'eighteen',
            '19': 'nineteen',
            '20': 'twenty',
            '30': 'thirty',
            '40': 'forty',
            '50': 'fifty',
            '60': 'sixty',
            '70': 'seventy',
            '80': 'eighty',
            '90': 'ninety',
            '100': 'hundred',
            }

    """ TODO
        two-digit numbers (in especially n (greater than 12 and less than 20)
        can express with thir, four, fif... + teen

        In other words, if there is stem about num,
        I can reduce dictionary's size
    """

    result = ''
    n_str = str(n)
    niketa = n_str[-2:]
    yonketa = n_str[:-2]

    if niketa in num_char_dic.keys():

        if yonketa == '':
            result += num_char_dic[niketa]

        else:
            if num_char_dic[niketa] == '':
                result += num_char_dic[niketa]
            else:
                result += 'and' + num_char_dic[niketa]

    else:
        if yonketa == '':
            result += '' + num_char_dic[niketa[0]+'0'] + num_char_dic[niketa[1]]

        else:
            result += 'and' + num_char_dic[niketa[0]+'0'] + num_char_dic[niketa[1]]

    if len(yonketa) == 1:
        result += num_char_dic[yonketa] + 'hundred'
    elif len(yonketa) == 2:
        result = 'onethousand'

    return result

if __name__ == '__main__':

    print(solve(1000))
