//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (long long i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> a(n);
  vector<bool> b(n);
  rep(i, n) cin >> a[i];

  long long sum = 0;
  rep (i, n) sum += a[i];

  long long ans = 1001001001001001;
  long long suma = 0;
  long long sumb;

  rep (i, n-1) {
    suma += a[i];
    sumb = (sum - suma);
    ans = min(abs(suma-sumb), ans);
  }

  cout << ans << endl;
  return 0;
}

