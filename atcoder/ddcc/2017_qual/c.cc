//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, c;
  cin >> n >> c;
  vector<int> L(n);
  rep (i, n) cin >> L[i];
  sort(L.begin(), L.end());

  int ans = 0;
  int remain = n;
  int lindex = 0;
  int rindex = n-1;

  while (remain > 0) {
    if (L[rindex] + L[lindex] + 1 <= c) {
      ans++;
      rindex--;
      lindex++;
      remain--;
      remain--;
    }

    else {
      ans++;
      rindex--;
      remain--;
    }
  }

  cout << ans << endl;

  return 0;
}

