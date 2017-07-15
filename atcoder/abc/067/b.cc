//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, k, ans;
  cin >> n >> k;
  vector<int> l(n);
  rep (i, n) cin >> l[i];
  sort(l.begin(), l.end(), greater<int>());
  rep (i, k) ans += l[i];

  cout << ans << endl;
  return 0;
}

