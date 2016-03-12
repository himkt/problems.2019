# -*- coding: utf-8 -*-

N = int(input())
data = list()

AA = 0
BB = 0
CC = 0


def get_length(a, b):
    return ((a[0]-b[0])**2+(a[1]+b[1])**2)**(1/2)


for _ in range(N):
    data.append(list(map(int, input().split())))


for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            # print(i, j, k)
            a, b, c = data[i], data[j], data[k]
            A = get_length(a, b)
            B = get_length(b, c)
            C = get_length(c, a)
            d = [A, B, C]
            d.sort()
            cos = d[0]**2+d[1]**2-d[2]**2
            # print(cos)

            if cos < 0.001 and cos > -0.001:
                AA += 1
            elif cos > 0:
                BB += 1
            elif cos < 0:
                CC += 1

print(CC, AA, BB)
