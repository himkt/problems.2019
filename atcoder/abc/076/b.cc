//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int ans = 1;
  rep (i, n) {
    if (2 * ans > ans + k) ans += k;
    else ans *= 2;
  }

  cout << ans << endl;
  return 0;
}

