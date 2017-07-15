# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
const long long INF = 1001001001;

int main() {
  int v, e, r;
  long long s, t, d_;
  cin >> v >> e >> r;

  vector<vector<long long>> d(v, vector<long long>(v));
  rep (i, v) fill(d[i].begin(), d[i].end(), INF);
  rep (i, v) d[i][i] = 0;

  rep (i, e) {
    cin >> s >> t >> d_;
    d[s][t] = d_;
    d[t][s] = d_;
  }

  rep (k, v) {
    rep (i, v) {
      rep (j, v) {
        if (i == j) continue;
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }

  rep (i, v) {
    rep (j, v) {
      cout << d[i][j] << ' ';
    }
    cout << endl;
  }
}
