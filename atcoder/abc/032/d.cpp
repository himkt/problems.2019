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

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)

using namespace std;
const int INF = 1e8;

int N, W;
int v[200], w[200];
int dp[1001][1001];


long long dfs(int i, int j) {
  long long res;

  if (i == N) {
    res = 0;
  }
  else if (j < w[i]) {
    res = dfs(i+1, j);
  }
  else {
    res = max(dfs(i+1, j), dfs(i+1, j-w[i])+v[i]);
  }
  return res;
}

long long dfs_memo(int i, int j) {
  long long res;

  if (dp[i][j] >= 0) {
    return dp[i][j];
  }

  if (i == N) {
    res = 0;
  }
  else if (j < w[i]) {
    res = dfs(i+1, j);
  }
  else {
    res = max(dfs(i+1, j), dfs(i+1, j-w[i])+v[i]);
  }
  return dp[i][j] = res;
}


int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N >> W;
  rep(i, N) cin >> v[i] >> w[i];

  if ( N > 30 ) {
    rep (i, 1001) {
      rep (j, 1001) {
        dp[i][j] = -1;
      }
    }

    cout << dfs_memo(0, W) << endl;
  }
  else {
    long long subvalue = 0;
    long long subweith = 0;
    rep (i, N) {
      subvalue += v[i];
      subweith += w[i];
    }

    if (subweith <= W) {
      cout << subvalue << endl;
    }
    else {
      cout << dfs(0, W) << endl;
    }
  }
}
