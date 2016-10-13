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


// %% begin matrix %%

typedef vector<int> vec;
typedef vector<vec> mat;

void pretty_print(mat g) {
  rep (i, g.size()) {
    rep (j, g[0].size()-1) {
      cout << g[i][j] << ' ';
    }
    cout << g[i][g[0].size()-1] << endl;
  }
}


mat mul(mat A, mat B) {
  mat C(A.size(), vec(B.size()));
  rep (i, A.size()) {
    rep (k, B.size()) {
      rep (j, B[0].size()) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return C;
}

// %% end matrix %%


int main() {

  int n;
  cin >> n;

  mat dp(1 << n, vec(n));

  rep (i, n) {
    rep (j, n) {
      dp[i][j] = 1001001001;
    }
  }

  dp[(1 << n) - 1][0] = 0;

  for (int S = (1 << n) - 2; S >= 0; S--) {
    rep (v, n) {
      rep (u, n) {
        if (! (S >> u & 1)) { // &1 ?
          dp[S][v] = min(dp[S][v], dp[S | 1 << u][u] + dp[v][u]);
        }
      }
    }
  }

  cout << dp[0][0] << endl;
}
