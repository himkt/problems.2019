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

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;
typedef long long ll;
typedef pair<int, int> P;

ll max(int i, int j) {
  return i > j ? i : j;
}

int H, W, A, B;
ll ans = 0;

ll inf = 1001001001001;

int main() {

  cin >> H >> W >> A >> B;

  ll dp[H][W];

  rep (i, H) {
    rep (j, W) {
      dp[i][j] = 1;
    }
  }

  rep (i, A) {
    rep (j, B) {
      dp[H - i - 1][j] = 0;
    }
  }


  rep (i, H-1) {
    rep (j, W-1) {

      cout << i << '-' << j << endl;

      if (dp[i+1][j+1] == 0) continue;
      dp[i+1][j+1] = max(0, dp[i+1][j] + dp[i][j+1]) % 1000000007;
    }
  }

  // rep (i, H) {
  //   rep (j, W) {
  //     cout << dp[i][j];
  //   }
  //   cout << endl;
  // }

  cout << dp[H-1][W-1] << endl;
}
