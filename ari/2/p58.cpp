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

#define rep(i, n) for(int i = 0;i < n;i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define repf(i, m, n) for(int i = m;i < n;i++)

using namespace std;
const int INF = 1e8;

int dp[101][10001];
int n, w[100], v[100], W;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> n;
  rep (i, n) {
    cin >> w[i] >> v[i];
  }
  cin >> W;

  rep (i, n) {
    rep (j, W+1) {
      if (j < w[i]) {
        dp[i+1][j] = dp[i][j];
      }
      else {
        dp[i+1][j] = max(dp[i][j], dp[i+1][j-w[i]]+v[i]);
      }
    }
  }

  cout << dp[n][W] << endl;
}
