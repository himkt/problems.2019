# NOTE : 勉強になる初期化の仕方
# dict(zip('abc',(input() for _ in range(3)))))

dic = dict()
k='a'

for name in list('abc'):
    dic[name] = input()

while dic[k]:
    dic[k],k=dic[k][1:],dic[k][0]
print(k.upper())
