

class NiceTable:
    def judge(self, t, xseq, yseq):
        for i, xseq_i in enumerate(xseq):
            for j, yseq_j in enumerate(yseq):
                if t[i][j] != str(int(xseq_i) ^ int(yseq_j)):
                    return False

        return True

    def isNice(self, t):
        lx = len(t)
        ly = len(t[0])

        x = [0 for _ in range(lx)]
        y = [0 for _ in range(ly)]

        for x in range(2**lx):
            for y in range(2**ly):
                fmt = ':0{}b'.format(lx)
                fmt = '{' + fmt + '}'
                xseq = fmt.format(x)
                # print(xseq)

                fmt = ':0{}b'.format(ly)
                fmt = '{' + fmt + '}'
                yseq = fmt.format(y)
                # print(yseq)

                if self.judge(t, xseq, yseq):
                    return "Nice"

        return "Not nice"


print(NiceTable().isNice(['1101', '1111']))
print(NiceTable().isNice(["0100", "1011", "0100"]))
print(NiceTable().isNice(["11", "10", "11", "11", "11"]))
