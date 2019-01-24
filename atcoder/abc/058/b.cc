//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    string odd, evn;
    cin >> odd >> evn;

    size_t t = max(odd.size(), evn.size());
    rep (i, t) {
        if (i < odd.size()) {
            cout << odd[i];
        }
        if (i < evn.size()) {
            cout << evn[i];
        }
    }
    cout << endl;

    return 0;
}

