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

struct segtree {
  int n;
  vector<int> d;
  segtree(int mx) {
    n = 1;
    while (n < mx) n<<=1;
    d = vector<int>(n<<1);
  }

  int getmax(int a, int b, int i=1, int l=0, int r=-1) {
    if (r == -1) r = n;
    if (a <= l && r <= b) return d[i];

    int res = 0;
    int c = (l+r)>>1;

    if (a < c) res = max(res, getmax(a, b, i<<1, l, c));
    if (c < b) res = max(res, getmax(a, b, i<<1|1, c, r));

    return res;
  }

  void add(int i, int x) {
    i += n;
    while (i) {
      d[i] = max(d[i], x);
      i >>= 1;
    }
  }
};

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);

  rep (i, n) {
    // firstが同じときはsecondの大きい順番でソート
    scanf("%d%d", &a[i].first, &a[i].second);
    a[i].second *= -1;
  }

  sort(a.begin(), a.end());

  segtree t(100005);
  int ans = 0;

  rep (i, n) {
    int h = -a[i].second;
    int now = t.getmax(0, h)+1;
    ans = max(ans, now);
    t.add(h, now);
  }

  cout << ans << endl;
}
