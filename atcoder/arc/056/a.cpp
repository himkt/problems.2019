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

ll a, b, k, l, ans, num;

ll min(ll num1, ll num2) {
  return num1 < num2 ? num1 : num2;
}

int main() {
  cin >> a >> b >> k >> l;

  ll ans = (k / l) * b + (k % l) * a;
  ans = min(ans, ((k + l-1) / l) * b);

  cout << ans << endl;
}
