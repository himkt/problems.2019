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


int max(int a, int b) {
  return (a >= b ? a : b);
}


ll max(ll a, ll b) {
  if (a >= b) {
    return a;
  }
  else {
    return b;
  }
}


ll fact(ll a) {
  if (a != 1) return a * fact(a-1);
  return 1;
}


int main() {
  int n;
  cin >> n;

  int ans = n * (n+1) / 2;

  cout << ans << endl;
}
