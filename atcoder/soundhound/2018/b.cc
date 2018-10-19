//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    string s;
    cin >> s;

    int w;
    cin >> w;

    rep (i, s.size()) {
        if (i % w == 0) {
            cout << s[i];
        }
    }
    cout << endl;

    return 0;
}

