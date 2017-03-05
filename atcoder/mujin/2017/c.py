

def proc(s, s_old):
    arg = -1

    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            arg = i
            break

    if arg == -1 or len(s) < 2:
        """
        ti=ti+1 であるような最小の i を選ぶ。
        そのような i が存在しない場合、処理を終える。
        """
        return s

    if s[arg] == 'z':
        """
        ti が z である場合、
        ti, ti+1 を取り除く。
        """
        s = s[0:arg] + s[arg+2:]

    else:
        """
        ti が z でない場合、
        ti の次のアルファベットを c として、
        ti, ti+1 をまとめて1 文字の c へ置き換える。
        """
        c = S[S.index(s[arg])+1]
        s = s[0:arg] + c + s[arg+2:]

    if s_old == s:
        return s
    else:
        s_old = s

    # 1. へ戻る
    return proc(s, s_old)


S = list('abcdefghijklmnopqrstuvwxyz')
s = input()
Q = int(input())

for _ in range(Q):
    l, r = map(int, input().split())
    _s = s[l-1:r]
    if proc(_s) == '':
        print('Yes')
    else:
        print('No')

    del _s
