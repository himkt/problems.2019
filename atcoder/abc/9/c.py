# -*- coding: utf-8 -*-


def arrange(S, suffix):

    suffix += sorted(list(S))[0]
    S.remove(suffix[-1])

    if K >= count_diff(S_origin, suffix + "".join(S)):
        return suffix + "".join(S)
    else:
        return arrange(S, suffix)


def count_diff(S, SS):
    return len([1 for s, ss in zip(S, SS) if s != ss])


N, K = map(int, input().split())
S = list(input())
S_origin = S


if K >= (count_diff(S, sorted(S))):
    print("".join(sorted(S)))
else:
    print(arrange(S, ""))
