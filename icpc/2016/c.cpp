# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;
typedef long long ll;

int check(int m, int t) {
  if ( t % m == 0) {
    return 0;
  }
  return 1;
}

void solve(int n, int m) {
  vector<int> factors;

  int i = 0;

  while (true) {
    if (factors.size() == n) break;
    FOR (j, m, factors.size()) {
      // cout << j << endl;
      // if (factors.size() == 0) {
      //   factors.push_back(i);
      //   i++;
      //   continue;
      // }
      // if (i % factors[j] == 0) {
      //   i++;
      //   continue;
      // }
    }
    factors.push_back(i);
    i++;
  }

  cout << "------" << endl;
  rep (i, factors.size()) {
    cout << factors[i] << endl;
  }
  cout << "------" << endl;
  int t = m;
  int cnt = 0;

  while (1) {
    int num = 1;

    rep (k, n) {
      num *= check(m, t);
    }

    if (num == 1) {
      cout << t << endl;
      return;
    } else {
      t++;
    }
  }
}

int main() {

  int m, n;

  while (cin >> m >> n) {
    if (m == 0 && n == 0) break;
    solve(n, m);
  }
}
