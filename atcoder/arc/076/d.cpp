# include <bits/stdc++.h>
 
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
using namespace std;
 
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
 
  template <typename T> pair<T, T> shape(vector<vector<T>> mat) {
    int d1, d2;
 
    d1 = mat.size();
    if (d1 > 0) d2 = mat[0].size();
    else int d2 = 0;
    cout << "(" << d1 << ", " << d2 << ")" << endl;
    return make_pair(0, 0);
  }
 
  template <typename T> vector<vector<T>> empty(int n, int m) {
    vector<vector<T>> mat(n, vector<T>(m));
    return mat;
  }
}
 
 
const long long INF = 1<<28;
 
long long cost(pair<int, int> p1, pair<int, int> p2) {
  int a = p1.first;
  int b = p1.second;
  int c = p2.first;
  int d = p2.second;
  //
  // cout << "a: " << a << endl;
  // cout << "b: " << b << endl;
  // cout << "c: " << c << endl;
  // cout << "d: " << d << endl;
 
  return min(abs(a-c), abs(b-d));
}
 
 
int main() {
  int n, x, y;
  cin >> n;
 
  vector<long long> mincost(n);
  vector<bool> used(n);
 
  vector<pair<long long, long long>> p;
  rep (i, n) {
    cin >> x >> y;
    p.push_back(make_pair(x, y));
  }
 
 
  // rep (i, n) {
  //   cout << p[i].first << ',' << p[i].second << endl;
  // }
 
 
  for (int i=0; i<n; i++) {
    mincost[i] = INF;
    used[i] = false;
  }
 
  mincost[0] = 0;
  long long res = 0;
 
  while (true) {
    int v = -1;
 
    for (int u=0; u<n; u++) {
      if (!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
    }
 
    // cout << v << endl;
    // utils::print(mincost);
 
    if (v == -1) break;
 
    used[v] = true;
    res += mincost[v];
 
    for (int u=0; u<n; u++) {
      // cout << cost(p[u], p[v]) << endl;
      mincost[u] = min(mincost[u], cost(p[u], p[v]));
    }
  }
 
  // utils::print(mincost);
  cout << res << endl;
}
