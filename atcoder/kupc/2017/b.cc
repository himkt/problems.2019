//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, s, t;
  cin >> n >> s >> t;

  int sum = 0;
  while (t > 0) {
    if (s == t) {
      cout << sum << endl;
      return 0;
    }
    t /= 2;
    sum ++;
  }

  cout << -1 << endl;
  return 0;
}

