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
typedef pair<int, int> P;

const int INF = 1001001001;

int main() {
}


// Segment-tree

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


// Union-find

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
