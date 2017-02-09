

class Cross:

    def exist(self, lines):
        n_height = len(lines)
        n_width = len(lines[0])

        for i in range(1, n_height - 1):
            for j in range(1, n_width - 1):
                if lines[i][j] == lines[i + 1][j] \
                        == lines[i - 1][j] == lines[i][j + 1] \
                        == lines[i][j - 1] == '#':
                    return 'Exist'

        return 'Does not exist'
