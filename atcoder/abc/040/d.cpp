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

using namespace std;
const int INF = 1e8;
const int MX = 200005;

typedef pair<int, int> P;

struct UF {
  int n;
  vector<int> d;
  UF() {}
  UF(int n): n(n), d(n, -1) {}

  int root(int v) {
    if (d[v] < 0) return v;
    return d[v] = root(d[v]);
  }

  bool unite(int x, int y) {
    x = root(x); y = root(y);
    if (x == y) return false; // グラスカル法
    if (size(x) < size(y)) swap(x, y);

    d[x] += d[y];
    d[y] = x;

    return true;
  }

  int size(int v) { return -d[root(v)]; }
};

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<vector<P>> e(MX);

  for (int i = 0; i < m; i++ ) {
    int a, b, y;
    cin >> a >> b >> y;
    --a; --b;
    e[y].push_back(P(a, b));
  }

  int q;
  cin >> q;

  vector<vector<P>> qs(MX);

  for (int qi = 0; qi < q; ++qi) {
    int v, w;
    cin >> v >> w;
    --v;
    qs[w].push_back(P(v, qi));
  }
  UF t(n);
  vector<int> ans(q);

  for (int i = MX-1; i >= 0; i--) {
    for (P p: qs[i]) {
      int v = p.first, qi = p.second;
      ans[qi] = t.size(v);
    }

    for (P p: e[i]) {
      int a = p.first, b = p.second;
      t.unite(a, b);
    }
  }

  for (int i = 0; i < q; ++i) {
    cout << ans[i] << endl;
  }

}
