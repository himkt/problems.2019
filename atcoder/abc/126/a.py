
n, k = map(int, input().split(' '))
s = input()

c_k = s[k-1].lower()
print(s[:k-1] + c_k + s[k:])
