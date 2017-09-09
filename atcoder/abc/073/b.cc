//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int ans = 0;
  int n, l, r;
  cin >> n;

  rep (i, n) {
    cin >> l >> r;
    ans += (r - l + 1);
  }
  cout << ans << endl;
  return 0;
}

