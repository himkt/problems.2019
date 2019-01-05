//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int x, y, k, j;
    cin >> x >> y;
    k = max(x, y);
    j = min(x, y);

    int nx = 0;
    int ny = 0;
    bool win_left = (k == x);

    rep (i, j) {
        if (win_left) ny++;
        else nx++;
        cout << nx << ":" << ny << endl;
    }

    rep (i, k) {
        if (win_left) nx++;
        else ny++;
        cout << nx << ":" << ny << endl;
    }
    return 0;
}

