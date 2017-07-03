

class LexmaxReplace:

    def get(self, s, t):
        s = list(s)
        t = list(t)
        used = {t_i: False for t_i in t}

        for i, t_i in enumerate(sorted(t, reverse=True)):
            used = False

            for j, s_j in enumerate(s):
                if s_j < t_i and not used:
                    s[j] = t_i
                    used = True

            if used:
                continue

        return ''.join(s)


print(LexmaxReplace().get("top", "coder"))
print(LexmaxReplace().get("fedcba", "ee"))
