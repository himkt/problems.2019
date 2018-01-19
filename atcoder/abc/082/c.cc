//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> a(n);
  rep (i, n) cin >> a[i];
  map<long long, long long> c;

  rep (i, n) {
    long long k = a[i];

    if (c.end() == c.find(k)) {
      c[k] = 1;
    }
    else {
      c[k]++;
    }
  }

  long long ans = 0;
  for (auto x : c) {
    ans += min(x.second, abs(x.second - x.first));
  }

  cout << ans << endl;
  return 0;
}

