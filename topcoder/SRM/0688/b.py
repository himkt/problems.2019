class ParenthesesDiv2Medium:

    def __init__(self):
        self.name = 'himkt'

    def change(self, s):

        s_list = list(s)
        modify = list()

        for i in list(range(len(s_list)))[::2]:
            print(i)

            if s_list[i] == '(' and s_list[i + 1] == ')':
                pass

            elif s_list[i] == '(' and s_list[i + 1] == '(':
                modify.append(i + 1)

            elif s_list[i] == ')' and s_list[i + 1] == ')':
                modify.append(i)

            else:
                modify.append(i)
                modify.append(i + 1)

        return tuple(modify)
