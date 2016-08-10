
def arg(operator):
    try:
        return elements.index(operator)
    except:
        return 100000000000000


elements = [elem if elem in ['+', '-', '*']
            else int(elem) for elem in input().split()]

while len(elements) != 1:
    if arg('+') or arg('-') or arg('*'):
        i = arg('+')
        i = min(i, arg('-'))
        i = min(i, arg('*'))

        if elements[i] == '+': r = elements[i-2] + elements[i-1]
        elif elements[i] == '-': r = elements[i-2] - elements[i-1]
        elif elements[i] == '*': r = elements[i-2] * elements[i-1]

        # i, i-1, i-2 -> one element
        elements = elements[:i-2] + [r] + elements[i+1:]
    else:
        break

print(elements[0])
