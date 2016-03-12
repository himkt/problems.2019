# -*- coding: utf-8 -*-


def dfs(q_num, xor_value):
    if N == q_num:
        return xor_value == 0
    else:
        for i in range(K):
            if dfs(q_num+1, xor_value ^ T[q_num][i]):
                return True
    return False


N, K = map(int, input().split())
T = [list(map(int, input().split())) for _ in range(N)]

if(dfs(0, 0)):
    print("Found")
else:
    print("Nothing")
