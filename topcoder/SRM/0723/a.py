

class BuffaloBuffalo:
    def __init__(self):
        pass

    def check(self, s):
        if s[0] == ' ' or s[-1] == ' ':
            return 'Not good'

        else:
            for s_ in s.split(' '):
                if s_ != 'buffalo':
                    return 'Not good'

        return 'Good'


s = input()
print(BuffaloBuffalo().check(s))
