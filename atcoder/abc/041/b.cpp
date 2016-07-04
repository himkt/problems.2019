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

const int INF = 1001001001;

ll a, b, c;

int main() {
  cin >> a >> b >> c;

  a = a % 1000000007;
  b = b % 1000000007;
  c = c % 1000000007;

  ll ans = (a * b) % 1000000007;
  ans = (ans * c) % 1000000007;

  cout << ans << endl;
}
