//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  long long x, y;
  cin >> x >> y;

  long long ans = 1;

  while ( 1 ) {
    // cout << x << endl;
    x *= 2;
    if ( y - x < 0 ) break;
    ans++;
  }

  cout << ans << endl;
  return 0;
}

