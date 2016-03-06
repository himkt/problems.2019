# -*- coding: utf-8 -*-

N = int(input())
R = list()
H = list()

for _ in range(N):
    elem = list(map(int, input().split()))
    R.append(elem[0])
    H.append(elem[1])

# 高速化する必要あるかも(i > j)の部分だけやれば良い

result = dict()

for i in range(N):
    result[i] = {"win": 0, "lose": 0, "even": 0}

for i in range(N):
    for j in range(i, N):
        if i == j:
            continue
        if R[i] > R[j]:
            result[i]["win"] += 1
            result[j]["lose"] += 1
            # increment R[i]'s score
        elif R[i] < R[j]:
            result[i]["lose"] += 1
            result[j]["win"] += 1
        elif R[i] == R[j]:
            if H[i] != H[j]:
                # rock paper scissors game
                if H[i] < H[j]:
                    if H[j] - H[i] == 1:
                        result[i]["win"] += 1
                        result[j]["lose"] += 1
                    else:
                        result[i]["lose"] += 1
                        result[j]["win"] += 1
                else:
                    if H[i] - H[j] == 1:
                        result[i]["lose"] += 1
                        result[j]["win"] += 1
                    else:
                        result[i]["win"] += 1
                        result[j]["lose"] += 1
            else:
                # even
                result[i]["even"] += 1
                result[j]["even"] += 1

for user_id, result in result.items():
    print("%d %d %d" % (result["win"], result["lose"], result["even"]))
