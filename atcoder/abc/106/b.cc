//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int solve(int n) {
    map<int, int> cnt;

    int k = 2;
    while (n >= k*k) {
        if (n % k == 0) {
            cnt[k]++;
            n /= k;
        }
        else {
            k += 1;
        }
    }

    // cout << "n=" << n << endl;
    if (n > 1) cnt[n]++;

    int ans = 1;
    for (auto p: cnt) {
        // cout << p.first << ", " << p.second << endl;
        ans *= (p.second+1);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> n_factor(n+1);
    fill(n_factor.begin(), n_factor.end(), 0);

    n_factor[0] = 0;
    n_factor[1] = 1;

    int ans = 0;
    for (int k=1; k<=n; k+=2) {
        /* n_factor[k] = solve(k); */
        // cout << "k=" << k << ", " << n_factor[k] << endl;
        if (solve(k) == 8) ans++;
    }

    cout << ans << endl;
    return 0;
}

