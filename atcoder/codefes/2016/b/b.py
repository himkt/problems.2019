
n, a, b = list(map(lambda x: int(x), input().split()))
s = input()


num_a = 0
num_b = 0

rank_b = 0

for i in range(len(s)):
    if s[i] == 'c':
        print('No')

    elif s[i] == 'a':
        if num_a + num_b < a + b:
            print('Yes')
            num_a += 1
        else:
            print('No')

    elif s[i] == 'b':
        rank_b += 1

        if num_a + num_b < a + b and rank_b <= b:
            print('Yes')
            num_b += 1
        else:
            print('No')
