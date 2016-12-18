
S = input()
head = 0

T = ['dream', 'dreamer', 'erase', 'eraser']


# dfs すれば良さそう

def ret(s, current):

    if s == S[:len(current)]:
        ret(s)

    return ret(s[head:])
    return False
    return True


if S[head] == 'd':
    pass

elif S[head] == 'e':
    pass

else:
    print('NO')
    exit()
