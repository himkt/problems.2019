//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


// 1 2 3 4 5 6

template<typename T>
int bsearch(vector<T> vec, T val) {
  T l = 0;
  T r = vec.size() - 1;

  if ((l+r)/2 > val) {
    r = (l+r)/2;
  }
  else {
    l = (l+r)/2;
  }
}

int main() {
  int n;
  cin >> n;

  vector<long long> a(n), b(n), c(n);
  rep (i, n) cin >> a[i];
  rep (i, n) cin >> b[i];
  rep (i, n) cin >> c[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  long long ans = 0;
  rep (i, n) {
    long long s = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    long long e = c.end() - upper_bound(c.begin(), c.end(), b[i]);
    ans += s*e;
  }

  cout << ans << endl;
  return 0;
}

