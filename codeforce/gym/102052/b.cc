//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}


void solve(long long m, long long k) {
    long long ans = 0;
    long long cur = 0;
    long long pos = 1;

    for (;; pos++) {
        cur += (k*pos);
        ans += k;
        if (m < cur) break;
    }

    float div = 0.5 + (float)(cur - m)/pos;
    cout << ans - (long long)div << endl;
}


int main() {
    long long t, m, k;
    cin >> t;

    rep (i, t) {
        cin >> m >> k;
        solve(m, k);
    }
    return 0;
}

