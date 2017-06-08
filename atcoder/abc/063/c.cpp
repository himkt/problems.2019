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
  int n;
  int sum = 0;
  cin >> n;

  vector<int> s(n);
  rep (i, n) {
    cin >> s[i];
    sum += s[i];
  }

  vector<int> dp(sum+1);
  fill(dp.begin(), dp.end(), 0);
  dp[0] = 1;

  for (int i=0; i<=sum; i++) {
    for (int j=0; j<n; j++) {
      if (dp[i] != 1) continue;
      if (i+s[j] > sum) continue;

      dp[i+s[j]] = 1;
    }
  }

  int ans = 0;
  for (int i=sum+1; i>=0; i--) {
    if (i % 10 == 0) continue;
    if (dp[i] == 1) ans = max(ans, i);
  }

  cout << ans << endl;
}
