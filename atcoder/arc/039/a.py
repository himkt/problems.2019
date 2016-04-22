
A, B = input().split()
Ad = list(A)
Bd = list(B)
Add = list(A)
Bdd = list(B)
Addd = list(A)
Bddd = list(B)

Ad[0] = '9'
ans_1 = int(''.join(Ad)) - int(''.join(B))
Bd[0] = '1'
ans_2 = int(''.join(A)) - int(''.join(Bd))
Add[1] = '9'
ans_3 = int(''.join(Add)) - int(''.join(B))
Bdd[1] = '0'
ans_4 = int(''.join(A)) - int(''.join(Bdd))
Addd[2] = '9'
ans_5 = int(''.join(Addd)) - int(''.join(B))
Bddd[2] = '0'
ans_6 = int(''.join(A)) - int(''.join(Bddd))

print(max(ans_1, ans_2, ans_3, ans_4, ans_5, ans_6))
