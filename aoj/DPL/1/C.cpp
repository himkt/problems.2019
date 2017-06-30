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

bool check(int next_j, int w) {
  cout << next_j << '-' << w << endl;
  if (0<=next_j && next_j<=w) true;
  return false;
}


int main() {
  int N, W;
  cin >> N >> W;
  vector<int> v(N+1), w(N+1);
  vector<vector<int>> dp = utils::empty<int>(N+1, W+1);
  rep (i, N) cin >> v[i+1] >> w[i+1];

  for (int i=1; i<=N; i++) {
    for (int j=1; j<=W; j++) {
      cout << i-w[i] << endl;
      if (check(i-w[i], W)) {
        dp[i][j] = max(dp[i-1][i-w[i]]+v[j], dp[i-1][j]);
      }
      else {
        dp[i][j] = dp[i-1][j];
        // dp[i][j] = max(dp[i-1][j-w[j]]+v[j], dp[i-1][j]);
      }
    }
  }

  utils::print(dp);
}
