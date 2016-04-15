from re import sub


class ParenthesesDiv2Hard:

    def __init__(self):
        self.name = 'himkt'

    def minSwaps(self, s, L, R):
        s = sub(r"\((?:.*?)\)", "", s)

        for i in range(len(L)):
            ...
