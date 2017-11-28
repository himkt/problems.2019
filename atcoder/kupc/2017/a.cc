//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep (i, n) cin >> a[i];

  int num = 0;
  int sum = 0;
  sort(a.begin(), a.end(), greater<int>());
  rep (i, n) {
    sum += a[i];
    num ++;

    if (sum >= k) {
      cout << num << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}

