# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>
# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

template <typename T>
void show_all(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j];
    }
    cout << endl;
  }
}


int main() {
  int N;
  long long W;
  cin >> N >> W;

  vector<long long> w(N);
  vector<long long> v(N);

  vector<vector<long long>> dp(N+1);
  rep (i, N+1) {
    vector<long long> row(W+1);
    dp[i] = row;
  }

  int n = 0;
  rep (j, W) dp[n][j] = 0;
  // show_all(dp);


  for (int i=N-1; i>=0; i--) {
    for (int j=0; j<=W; j++) {
      // cout << "j: " << j << endl;
      // cout << "i: " << i << endl;
      // cout << "w[i]: " << w[i] << endl;
      if (j < w[i]) {
        dp[i][j] = dp[i + 1][j];
      } else {
        // cout << "i+1: " << i+1 << endl;
        // cout << "j-w[i]: " << j-w[i] << endl;
        // cout << "dp[i+1][j-w[i]]: " << dp[i+1][j-w[i]] << endl;
        // cout << dp[i + 1][j - w[i]] + v[i] << endl;
        dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
      }
    }

    // show_all(dp);
  }

  cout << dp[0][W] << endl;
}
