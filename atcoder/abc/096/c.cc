#include <iostream>
#include <vector>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> z(h);
    for (int i = 0; i < h; i++) {
        z[i].resize(w);
        for (int j = 0; j < w; j++)
            cin >> z[i][j];
    }

    if (h == 1 and w == 1) {
        if (z[0][0] == '#') {
            cout << "No" << endl;
            return 0;
        } else {
            cout << "Yes" << endl;
            return 0;
        }
    }

    bool solvable = true;
    for (int i = 1; i < h - 1; i++) {
        for (int j = 1; j < w - 1; j++) {
            if (z[i][j] == '.')
                continue;
            if (z[i][j] == '#' and z[i][j] == z[i][j - 1])
                continue;
            if (z[i][j] == '#' and z[i][j] == z[i][j + 1])
                continue;
            if (z[i][j] == '#' and z[i][j] == z[i - 1][j])
                continue;
            if (z[i][j] == '#' and z[i][j] == z[i + 1][j])
                continue;

            solvable = false;
            break;
        }

        if (!solvable)
            break;
    }

    if (solvable)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
