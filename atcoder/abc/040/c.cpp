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
# define argmin(a, b) a = min(a, b)

using namespace std;
const int INF = 1001001001;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);

  rep (i, n) {
    cin >> a[i];
  }

  vector<int> dp(n+5, INF);

  dp[0] = 0;

  rep (i, n) {

    // なんでここ直列にやってうまくいくのかよくわからない
    argmin(dp[i+1], dp[i] + abs(a[i] - a[i+1]));
    argmin(dp[i+2], dp[i] + abs(a[i] - a[i+2]));
  }

  cout << dp[n-1] << endl;
}
