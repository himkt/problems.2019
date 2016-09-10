from collections import Counter

if len(list((filter(lambda x: x%2 != 0, Counter(list(input())).values())))) > 0:
    print('No')
else:
    print('Yes')
