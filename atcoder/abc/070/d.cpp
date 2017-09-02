//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  long long n, q, k, x, y;
  vector<long long> a, b, c;

  cin >> n;
  a.resize(n-1);
  b.resize(n-1);
  c.resize(n-1);
  vector<vector<long long>> d(n);
  rep (i, n) {
    d[i].resize(n);
    fill(d[i].begin(), d[i].end(), 1001001001001);
  }

  rep (i, n-1) {
    cin >> a[i] >> b[i] >> c[i];
    --a[i]; --b[i];
    d[a[i]][b[i]] = c[i];
    d[b[i]][a[i]] = c[i];
  }


  rep (i, n) {
    rep (j, n) {
      rep (k, n) {
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
      }
    }
  }

  cin >> q >> k;
  --k;


  rep (i, q) {
    cin >> x >> y;
    --x; --y;
    cout << d[x][k] + d[k][y] << endl;
  }

  return 0;
}

