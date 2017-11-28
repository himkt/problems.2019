//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
const long long INF = 1001001001001;


int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<long long>> d;
  d.resize(n);
  rep (i, n) {
    d[i].resize(n);
    fill(d[i].begin(), d[i].end(), INF);
    d[i][i] = 0;
  }

  int a, b, c;
  rep (i, m) {
    cin >> a >> b >> c;
    d[--a][--b] = c;
  }


  rep (k, n) {
    rep (i, n) {
      rep (j, n) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }


  rep (i, n) {
    rep (j, n) {
      cout << d[i][j] << ' ';
    }
    cout << endl;
  }
  cout << 1 << endl;
  return 0;
}

