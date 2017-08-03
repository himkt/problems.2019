//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
vector<vector<int>> Z;


int main() {
  int n, w, h, x, y, s, t;

  while (cin >> n, n) {
    cin >> w >> h;
    Z.resize(w);
    rep (i, w) Z[i].resize(h);
    rep (i, w) fill(Z[i].begin(), Z[i].end(), 0);

    rep (i, n) {
      cin >> x >> y;
      Z[x-1][y-1] = 1;
    }

    cin >> s >> t;
    int ans = 0;

    rep (i, w-s+1) {
      rep (j, h-t+1) {
        int ans_ = 0;
        rep (a, s) rep (b, t) ans_ += Z[i+a][j+b];
        ans = max(ans, ans_);
      }
    }

    cout << ans << endl;
  }
  return 0;
}

