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

int main() {
  int n;
  cin >> n;
  vector<ll> R(n);
  rep (i, n) cin >> R[i];
  
  ll ans = -1001001001001;

  rep (i, n) for (int j = i+1; j < n; j++) ans = (R[j] - R[i] > ans ? R[j] - R[i] : ans);
  cout << ans << endl;
}
