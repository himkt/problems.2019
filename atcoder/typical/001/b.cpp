# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

// namespace utils
namespace utils{
  template <typename T> void print(vector<vector<T>> mat) {
    rep (i, mat.size()) {
      rep (j, mat[0].size()) cout << mat[i][j] << ' ';
      cout << endl;
    }
  }

  template <typename T> void print(vector<T> v) {
    rep (i, v.size()) cout << v[i] << ' ';
    cout << endl;
  }
// end namespace utils
}


class UnionFind {

  public:
    UnionFind(int n) {
      w.resize(n);
      rep (i, w.size()) w[i] = i;
    }

    vector<int> w;
    int root(int a);
    void unite(int a, int b);
    bool same(int a, int b);
};

int UnionFind::root(int a) {
  // if (a != w[a]) return root(w[a]); // TLE
  if (a != w[a]) return w[a] = root(w[a]); // NOTE: should return w[] = b
  else return a;
}

void UnionFind::unite(int a, int b) {
  if (root(a) != root(b)) {
    w[a] = b; // IMPORTANT
  }
}

bool UnionFind::same(int a, int b) {
  return root(a) == root(b);
}


int main() {
  int n, q, p, a, b;
  cin >> n >> q;

  UnionFind uf = UnionFind(n);
  rep (i, q) {
    cin >> p >> a >> b;
    if (!p) uf.unite(a, b);
    else cout << (uf.same(a, b) ? "Yes" : "No") << endl;
  }
}
