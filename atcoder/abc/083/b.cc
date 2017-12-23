//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int ans = 0;
  int n, a, b;
  cin >> n >> a >> b;

  rep (i, n+1) {
    int k1 = i / 10000;
    int k2 = (i - k1*10000) / 1000;
    int k3 = (i - k1*10000 - k2*1000) / 100;
    int k4 = (i - k1*10000 - k2*1000 -k3*100) / 10;
    int k5 = (i - k1*10000 - k2*1000 -k3*100 - k4*10);

    // cout << k1 << ", " << k2 << ", " << k3 << ", " << k4 << ", " << k5 << endl;
    int sum = k1 + k2 + k3 + k4 + k5;
    if (a <= sum && sum <= b) {
      // cout << i << endl;
      ans += i;
    }
  }

  cout << ans << endl;
  return 0;
}

