//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  rep (i, n) cin >> a[i];

  int ans = 1001001001;
  rep (i, n) {
    if (a[i] % 2 == 0) {
      int ans_ = 0;
      while (true) {
        if (a[i] > 0 && a[i] % 2 == 0) {
          ans_++;
          a[i] /= 2;
        }
        else {
          break;
        }
      }
      ans = min(ans, ans_);
    }
    else {
      break;
    }
  }

  if (ans == 1001001001) {
    cout << 0 << endl;
  }
  else {
    cout << ans << endl;
  }

  return 0;
}

