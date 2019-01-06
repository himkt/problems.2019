//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int j=0; j<=n; j++) {
        int nn = n - j;
        int mm = m - 3*j;

        // 2*i + 4*k = md s.t. i+k=n-j のつるかめ算
        int i = nn; // k=0

        // m - 2*i: 足りない足の数
        // cout << "mm-2*i=" << mm-2*i << endl;
        i -= (mm-2*i)/2;
        int k = nn - i;
        if (i < 0 || j < 0 || k < 0) continue;
        if (2*i + 3*j + 4*k == m) {
            cout << i << ' ' << j << ' ' << k << endl;
            return 0;
        }
    }

    cout << "-1 -1 -1" << endl;
    return 0;
}

