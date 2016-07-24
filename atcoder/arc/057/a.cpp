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

const ll INF = 2 * 1e12;

ll a, k;

int main() {
  cin >> a >> k;
  ll t = 0;

  if (k == 0) {
    cout << INF - a << endl;
  }
  else {
    while (1) {
      a += 1 + k*a;
      t++;

      if (a >= INF) {
        break;
      }
    }
    cout << t << endl;
  }
}
