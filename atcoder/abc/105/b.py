

def solve(n):
    for i in range(30):
        for k in range(20):
            if i == k == 0:
                continue
            if i * 4 + 7 * k == n:
                print('Yes')
                return

    print('No')
    return


if __name__ == '__main__':
    n = int(input())
    solve(n)
