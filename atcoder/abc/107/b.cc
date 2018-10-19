//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> a(h);
    rep (i, h) {
        a[i].resize(w);
    }

    rep (i, h) {
        rep (j, w) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> b(h+1);
    rep(i, h+1) {
        b[i].resize(w+1);
        fill(b[i].begin(), b[i].end(), 0);
    }

    rep (i, h) {
        rep (j, w) {
            if (a[i][j] == '.') {
                b[i][w]++;
                b[h][j]++;
            }
        }
    }

    rep (i, h) {
        string row = "";
        rep (j, w) {
            if (b[i][w] >= w) continue;
            if (b[h][j] >= h) continue;
            row += a[i][j];
        }

        if (row == "") continue;
        cout << row << endl;
    }

    return 0;
}

