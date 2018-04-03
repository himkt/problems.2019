//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
  return (a * b) / __gcd(a, b);
}

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<int>> c;
  vector<vector<int>> A;

  c.resize(10);
  rep (i, 10) c[i].resize(10);
  rep (i, 10) rep (j, 10) cin >> c[i][j];

  A.resize(H);
  rep (i, H) A[i].resize(W);
  rep (i, H) rep (j, W) cin >> A[i][j];

  rep (k, 10) {
    rep (i, 10) {
      rep (j, 10) {
        if (i == j) continue;
        c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
      }
    }
  }

  int start_node;
  long long ans = 0;

  rep (i, H) {
    rep (j, W) {
      start_node = A[i][j];
      if (start_node == -1) continue;
      ans += c[start_node][1];
    }
  }

  cout << ans << endl;
  return 0;
}

