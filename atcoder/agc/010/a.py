

N = int(input())
A = list(map(int, input().split()))

nb_even = len(list(filter(lambda x: x % 2 == 0, A)))
nb_odd = len(A) - nb_even


if nb_odd == 1:
    if nb_even == 0:
        print('YES')
    else:
        print('NO')
else:
    if nb_odd % 2 == 0:
        print('YES')
    else:
        print('NO')
