
s = input()
s_ = ''.join(s__ for s__ in list(s) if s__ != 'x')

lens_ = len(s_)
if lens_ % 2 == 0:
    if s_[:lens_//2+1] != s_[lens_//2:]:
        print(-1)
        exit()

else:
    if s_[:lens_//2] != s_[(lens_//2)+1:]:
        print(-1)
        exit()
