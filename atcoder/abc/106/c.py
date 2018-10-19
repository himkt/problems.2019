

def update(s):
    new_s = ''
    for s_i in s:
        new_s += s_i * int(s_i)

    print('updated')
    return new_s


s = input()
k = int(input())

cur_s = s[0:k]
old_s = cur_s

while 1:
    new_s = update(cur_s)[0:k]
    if new_s == cur_s:
        break
    print(new_s, cur_s)
    old_s = cur_s
    cur_s = new_s

print(new_s[-1])
