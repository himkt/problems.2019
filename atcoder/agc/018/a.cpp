//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int n, k;

vector<int> a;

bool solve() {
  if (find(a.begin(), a.end(), k) != a.end()) return true;

  rep (i, n) {
    rep (j, n) {
      int diff = abs(a[i]-a[j]);
      if (diff == 0) continue;
      if (find(a.begin(), a.end(), diff) == a.end()) {
        bool f = true;
        rep (k, n) {
          if (a[k] > diff) {
            if (a[k] % diff == 0) f = false;
          }
          else {
            if (diff % a[k] == 0) f = false;
          }
        }

        if (!f) continue;
        return true;
      }
    }
  }
  return false;
}

int main() {
  int a_max = 0;

  cin >> n >> k;
  a.resize(n);

  rep (i, n) {
    cin >> a[i];
    a_max = max(a_max, a[i]);
  }

  if (k > a_max) cout << "IMPOSSIBLE" << endl;
  else {
    if (solve()) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
  }
  return 0;
}

