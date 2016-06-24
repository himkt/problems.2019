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

void solve(int n) {
  vector<int> a(n);
  rep (i, n) {
    cin >> a[i];
  }
  int ans = 100000000;
  sort(a.begin(), a.end());
  rep (i, n-1) {
    int diff = a[i+1] - a[i];
    if (ans > diff) {
      ans = diff;
    }
  }
  cout << ans << endl;
}

int main() {
  int n;

  while (cin >> n) {
    if (n == 0) break;
    solve(n);
  }
}
