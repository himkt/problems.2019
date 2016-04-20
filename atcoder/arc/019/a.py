rule = {'O': '0',
        'D': '0',
        'I': '1',
        'Z': '2',
        'S': '5',
        'B': '8'
        }

S = input()

print(''.join(map(lambda s: rule[s] if s in rule.keys() else s, list(S))))
