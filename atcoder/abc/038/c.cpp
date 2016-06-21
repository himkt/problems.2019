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
const int INF = 1e8;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);

  rep (i, n) {
    cin >> a[i];
  }

  int r = 0;
  long long ans = 0;

  rep (l, n) {
    if ( l > r ) r = l;
    while (r < n-1 && a[r] < a[r+1]) ++r;
    ans += r-l+1;
  }

  cout << ans << endl;
}
