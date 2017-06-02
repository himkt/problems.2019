# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

namespace utils{
  template <typename T> void print(vector<vector<T>> mat) {
    rep (i, mat.size()) {
      rep (j, mat[0].size()) cout << mat[i][j] << ' ';
      cout << endl;
    }
  }

  template <typename T> void print(vector<T> v) {
    rep (i, v.size()) cout << v[i] << ' ';
    cout << endl;
  }

  template <typename T> pair<T, T> shape(vector<vector<T>> mat) {
    int d1, d2;

    d1 = mat.size();
    if (d1 > 0) d2 = mat[0].size();
    else int d2 = 0;
    cout << "(" << d1 << ", " << d2 << ")" << endl;
    return make_pair(0, 0);
  }

  template <typename T> vector<vector<T>> empty(int n, int m) {
    vector<vector<T>> mat(n, vector<T>(m));
    return mat;
  }
}


int main() {
  int n, m;
  cin >> n >> m;

  vector<int> c(m+1);
  rep (i, m) cin >> c[i+1];

  vector<vector<int>> dp = utils::empty<int>(m+1, n+1);
  rep (i, m+1) fill(dp[i].begin(), dp[i].end(), 0);
  rep (i, n+1) dp[0][i] = 1<<29;

  for (int i=1; i<=m; i++) {
    for (int j=1; j<=n; j++) {
      // cout << i << ',' << j << endl;
      if (j - c[i] < 0) {
        dp[i][j] = dp[i-1][j];
      }
      else {
        dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]]+1);
      }
    }
  }

  // utils::print(dp);
  cout << dp[m][n] << endl;
}
