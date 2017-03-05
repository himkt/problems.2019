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


int main() {

  int k, s;
  cin >> k >> s;

  int ans = 0;

  rep (x, k+1) {
    rep (y, s-x+1) {
      int z = s - x - y;
      if (x <= k && y <= k && z <= k) ans++;
    }
  }

  cout << ans << endl;
}
