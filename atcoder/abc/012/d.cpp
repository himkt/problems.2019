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

using namespace std;
const int INF = 1e8;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)

int d[300][300];
int N, M, a, b, c;
int ans = INF;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N >> M;

  rep (i, N) {
    rep (j, N) {
      d[i][j] = (i == j ? 0 : INF);
    }
  }

  rep (i, M) {
    int a, b, t;
    cin >> a >> b >> t;
    d[a-1][b-1] = t;
    d[b-1][a-1] = t;
  }

  rep (k, N) {
    rep (i, N) {
      rep (j, N) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }

  rep (i, N) {
    int ans_i = 0;
    rep (j, N) {
      ans_i = max(ans_i, d[i][j]);
    }
    ans = min(ans, ans_i);
  }

  cout << ans << endl;
}
