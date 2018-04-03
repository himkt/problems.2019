//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
  return (a * b) / __gcd(a, b);
}

int main() {
  int n;
  cin >> n;

  vector<long long> dp(87);
  dp[0] = 2;
  dp[1] = 1;

  rep (i, 85) {
    dp[i+2] = dp[i] + dp[i+1];
  }

  cout << dp[n] << endl;
  return 0;
}

