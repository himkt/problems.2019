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

int n;

int main() {
  int ans = 0;

  rep (i, 100) {
    if ((i+1) % 15 == 0) {
      // cout << "天下一プログラマー";
    }
    else if ((i+1) % 3 == 0) {
      // cout << "天下一";
    }
    else if ((i+1) % 5 == 0) {
      // cout << "プログラマー";
    }
    else {
      ans += (i+1);
    }
  }

  cout << ans << endl;
}
