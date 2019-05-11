# include <iostream>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int r, g, b, n; cin >> r >> g >> b >> n;
    int ans = 0;

    rep (i, n+1) {
        if (r*i > n) continue;

        rep (j, n+1) {
            if (r*i + g*j > n) continue;
            if ((n - r*i - g*j) % b == 0) ans++;
            // rep (k, n+1) {
            //     if (r*i + g*j + b*k == n) {
            //         // cout << i << ", " << j << ", " << k << endl;
            //         ans++;
            //     }

            //     if (r*i + g*j + b*k > n) {
            //         continue;
            //     }
            // }
        }
    }

    cout << ans << endl;
    return 0;
}

