//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, m;
  vector<int> a;
  while (cin >> n >> m, n && m) {
    int ans = -1;

    a.resize(n);
    rep (i, n) cin >> a[i];
    rep (i, n) rep (j, n) if (i != j && a[i]+a[j]<=m) ans = max(ans, a[i]+a[j]);

    if (ans < 0) cout << "NONE" << endl;
    else cout << ans << endl;
  }
  return 0;
}
