#include <iostream>
#include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int ans = 0;
    int n, m;
    cin >> n >> m;

    vector<int> x(m);
    rep (i, m) cin >> x[i];
    sort(x.begin(), x.end());

    if (m == 1) {
        cout << 0 << endl;
        return 0;
    }

    if (n >= m) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> y(m-1);
    rep (i, m-1) y[i] = x[i+1] - x[i];

    sort(y.begin(), y.end());
    rep (i, m-n) ans += y[i];
    cout << ans << endl;
}

