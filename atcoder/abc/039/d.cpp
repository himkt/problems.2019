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
const int INF = 1e8;

typedef vector<string> G;

int main() {
  int h, w;
  cin >> h >> w;
  G s(h);

  rep (i, h) {
    cin >> s[i];
  }

  G t(h, string(w, '#'));

  rep (i, h) {
    rep (j, w) {
      int cnt = 0;
      FOR(di, -1, 2) {
        FOR(dj, -1, 2) {
          int ni = i+di;
          int nj = j+dj;
          // 短絡評価をするのでs[ni][nj]はindex errorしない
          if (ni < 0 || nj < 0 || ni>=h || nj>=w || s[ni][nj] == '#') {
            cnt++;
          }
        }
      }
      if (cnt != 9) {
        t[i][j] = '.';
      }
    }
  }

  G u = t;

  rep (i, h) {
    rep (j, w) {
      int cnt = 0;
      FOR(di, -1, 2) {
        FOR(dj, -1, 2) {
          int ni = i+di;
          int nj = j+dj;
          // 短絡評価をするのでs[ni][nj]はindex errorしない
          if (ni < 0 || nj < 0 || ni>=h || nj>=w) continue;
          if (t[ni][nj] == '#') cnt++;
        }
      }
      if (cnt >= 1) {
        u[i][j] = '#';
      }
    }
  }

  if (s == u) {
    cout << "possible" << endl;
    rep (i, h) {
      cout << t[i] << endl;
    }
  }
  else {
    cout << "impossible" << endl;
  }
}
