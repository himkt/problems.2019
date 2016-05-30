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

int factorial(int i) {
  if (i < 1) return 1;
  return i * factorial(i-1);
}

int permutation(int k, int c) {
  return factorial(k) / factorial(k - c);
}

int combination(int k, int c) {
  return factorial(k) / (factorial(c) * factorial(k - c));
}

int n, W;
int v[200], w[200];
long long dp[201][201];


long long dfs(int i, int j) {

  cout << j << endl;

  long long res;

  if (dp[i][j] >= 0) {
    return dp[i][j];
  }


  if (i == n) {
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

  cin >> n >> W;

  memset(dp, -1, sizeof(dp));

  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v[i] = b;
    w[i] = a;
  }

  cout << dfs(0, W) << endl;
}
