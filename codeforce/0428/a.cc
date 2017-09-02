//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, k, ak;
  cin >> n >> k;
  int arya = 0;
  int bran = 0;

  int ans = -1;

  rep (i, n) {
    cin >> ak;
    arya += ak;

    int a = min(8, arya);
    bran += a;
    arya -= a;

    if (bran >= k) {
      ans = i+1;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}

