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
ll N, H, A, B, C, D, E, ans;
 
int main() {
  cin >> N >> H >> A >> B >> C >> D >> E;
  ans = numeric_limits<long long>::max();
 
  rep (x, N) {
    ll y = 0;

    if (E*(N-x) - H - B*x >= 0) {
      y = ((E*(N-x) - H - B*x) / (D+E)) + 1;
    }
    ans = min(A*x + C*y, ans);
  }
 
  cout << ans << endl;
}
