//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a, b;
  a.resize(n);
  b.resize(n);

  rep (i, n) cin >> a[i];
  rep (i, n) cin >> b[i];

  sort(b.begin(), b.end(), greater<int>());

  int all_cola = 0;
  rep (i, n) all_cola += a[i];
  int capacity = b[0] + b[1];

  if (all_cola <= capacity) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}

