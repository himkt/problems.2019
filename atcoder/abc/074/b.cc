//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> x(n);
  rep (i, n) cin >> x[i];

  int ans = 0;

  rep (i, n) {
    ans += 2 * min(x[i], abs(k-x[i]));
  }

  cout << ans << endl;

  return 0;
}

