//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, m, k;
  map<int, int> d;
  cin >> n;
  rep (i, n) {
    cin >> k;
    d[k]++;
  }

  // cout << "-----------" << endl;
  // for (pair<int, int> p : d) {
  //   cout << p.first << ": " << p.second << endl;
  //   cout << d[p.first] << endl;
  // }
  // cout << "-----------" << endl;

  cin >> m;
  rep (i, m) {
    cin >> k;
    if (d[k] > 0) {
      d[k]--;
    }
    else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}

