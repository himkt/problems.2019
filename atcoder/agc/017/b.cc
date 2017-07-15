//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;

  int l = min(a, b);
  int r = max(a, b);

  c =- c;
  d =- c;

  if (l-r < 2*(n-2)) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}

