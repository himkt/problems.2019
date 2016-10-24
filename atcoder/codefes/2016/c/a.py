
s = input()

ans_i = 0
ans_j = 0

for s_i in s:
    if s_i == 'C':
        ans_i = 1

    if ans_i == 1 and s_i == 'F':
        ans_j = 1

if ans_i and ans_j:
    print('Yes')
else:
    print('No')
