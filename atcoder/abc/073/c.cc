//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, a;
  map<int, int> count;

  int ans = 0;

  cin >> n;
  rep (i, n) {
    cin >> a;

    if (count.find(a) == count.end()) {
      count[a] = 1;
    }
    else {
      count[a]++;
    }
  }

  for (pair<int, int> c : count) {
    if (c.second % 2 == 1) ans++;
  }

  cout << ans << endl;
  return 0;
}

