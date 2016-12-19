
N = int(input())
A = list(map(int, input().split()))

A_ = sorted(A)

if len(A_) == 1:
    if A_[0] == 0:
        print(1)
    else:
        print(0)

elif A_[0] == A_[1] == 0:
    print(0)

else:
    ans_ = 2 ** (N // 2)
    ans = ans_ % (10**9 + 7)


    if len(A_) % 2 == 0:
        for i in range(len(A_) // 2):
            if A_[2*i] != A_[2*i+1]:
                print(0)
                exit()

    else:
        if A_[0] != 0:
            print(0)
            exit()

        for i in range(len(A_) // 2):
            if A_[2*i+1] != A_[2*i+2]:
                print(0)
                exit()


    print(ans)
