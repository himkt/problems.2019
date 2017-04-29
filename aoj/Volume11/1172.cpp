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

template <typename T>
void show_all(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j];
    }
    cout << endl;
  }
}


void sieve(vector<int> &c, vector<bool> &b) {
  int i = 0;
  int next_i;
  int top_n;

  top_n = c[i];
  b[i] = true;

  while (i < c.size()-1) {
    cout << "i: " << i << ", sizeof(c): " << c.size() << endl;

    for (int k=i; k<b.size(); k++) {
      if (c[k] % top_n == 0) b[k] = true;
    }

    for (int k=i; k<c.size(); k++) {
      if (!b[k]) {
        cout << "now: " << i << ", next: " << k << endl;
        next_i = k;
        break;
      }
    }

    if (i == next_i) break;
    i = next_i;
    top_n = c[i];
  }
}


int main() {
  int n;
  vector<int> b(2*123456);
  rep (i, b.size()) b[i] = 1;
  b[0] = 0;

  for (int i=2; i<b.size(); i++) {
    for (int j=2; i*j<b.size(); j++) {
      b[i*j] = 0;
    }
  }

  while (cin >> n && n) {
    int ans = 0;

    // 2n+1
    for (int i=n+1; i<2*n+1; i++) {
      if (b[i]) ans++;
    }

    cout << ans << endl;
  }
}
