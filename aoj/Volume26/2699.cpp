//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

long double min(double a, double b) {
  return a < b ? a : b;
}

int main() {
  long double d, e;
  while(cin >> d >> e, d && e) {
    long double ans = 1001001001;
    for (int i=0; i<d; i++) {
      long double j = d - i;
      long double d_ = abs(sqrt(pow(i, 2) + pow(j, 2)) - e);
      ans = min(ans, d_);
    }
    cout << ans << endl;
  }
  return 0;
}

