class ParenthesesDiv2Easy:

    def __init__(self):
        self.name = 'himkt'

    def getDepth(self, str):
        ans = 0
        ans_p = 0

        for s in list(str):
            if s == '(':
                ans_p += 1
            elif s == ')':
                ans = max(ans, ans_p)
                ans_p = 0

        return ans


print(ParenthesesDiv2Easy().getDepth("((())())(((())(()))())"))
