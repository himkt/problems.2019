//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int n;
    cin >> n;

    vector<int> xs(n), ys(n), as(n), bs(n);
    map<pair<int, int>, int> m;
    rep(i, n) cin >> xs[i] >> ys[i];
    rep(i, n) cin >> as[i] >> bs[i];

    rep(i, n) {
        rep (j, n) {
            m[make_pair(xs[i]+as[j], ys[i]+bs[j])]++;
        }
    }

    for (auto p : m) {
        if (p.second == n) {
            auto ans = p.first;
            cout << ans.first << " " << ans.second << endl;
            return 0;
        }
    }

    return 0;
}

