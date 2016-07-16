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

int n;

int main() {
  cin >> n;
  vector<int> l(2 * n);

  rep (i, 2*n) {
    cin >> l[i];
  }

  sort(l.begin(), l.end());
  reverse(l.begin(), l.end());

  int ans = 0;
  rep (i, n) {
    ans += min(l[2*i], l[2*i+1]);
  }

  cout << ans << endl;
}
