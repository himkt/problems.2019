//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  rep (i, n+1) {
    rep (j, m+1) {
      if (i * (m-j) + j * (n-i) == k) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}

