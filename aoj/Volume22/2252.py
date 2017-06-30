

def solve(s):

    dic = {}
    ll = 'qwertasdfgzxcvb'
    rr = 'yuiophjklnm'

    for l_i in list(ll):
        dic[l_i] = -1

    for r_i in list(rr):
        dic[r_i] = 1

    ans = 0
    prev = 0

    for s_i in s:
        current = dic[s_i]
        if current != prev:
            if abs(current - prev) == 2:
                ans += 1

        prev = current

    return ans


while 1:
    s = raw_input()
    if s == '#':
        break

    print(solve(s))
