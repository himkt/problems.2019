//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;

    int dx = gx - sx, dy = gy - sy;

    // first
    rep (i, dy) cout << 'U';
    rep (i, dx) cout << 'R';
    rep (i, dy) cout << 'D';
    rep (i, dx) cout << 'L';

    // second
    cout << 'L';
    rep (i, dy+1) cout << 'U';
    rep (i, dx+1) cout << 'R';
    cout << 'D';
    cout << 'R';
    rep (i, dy+1) cout << 'D';
    rep (i, dx+1) cout << 'L';
    cout << 'U' << endl;
    return 0;
}

