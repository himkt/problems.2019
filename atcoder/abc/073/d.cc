//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
const long long INF = 1001001001001001001;

long long compute(vector<vector<long long>> &d, vector<int> &rs) {
  long long ans = 0;

  rep (i, rs.size()-1) {
    ans += d[rs[i]][rs[i+1]];
  }

  return ans;
}

int main() {
  int n, m, r;
  long long a, b, c;
  cin >> n >> m >> r;

  vector<int> rs(r);
  rep (i, r) {
    cin >> rs[i];
    rs[i]--;
  }

  vector<vector<long long>> d(n);
  rep (i, n) {
    d[i].resize(n);
    fill(d[i].begin(), d[i].end(), INF);
  }

  rep (i, m) {
    cin >> a >> b >> c;
    a--; b--;

    c = min(d[a][b], c);
    d[a][b] = d[b][a] = c;
  }

  rep (k, n) {
    rep (i, n) {
      rep (j, n) {
        d[i][j] = min(d[i][k] + d[k][j], d[i][j]);
      }
    }
  }

  long long ans = INF;
  ans = min(ans, compute(d, rs));

  while (next_permutation(rs.begin(), rs.end())) {
    ans = min(ans, compute(d, rs));
  }

  cout << ans << endl;
  return 0;
}

