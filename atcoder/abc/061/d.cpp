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

bool dfs(vector<vector<long long>> &dag, vector<bool> &reached, int i) {
  if (reached[i]) return true;
  reached[i] = true;

  rep (j, dag[0].size()) {
    if (i!=j && dag[i][j] != 0) {
      return dfs(dag, reached, j);
    }
  }

  return false;
}

long long search(vector<vector<long long>> &dag, vector<bool> &reached, int i, long long ans) {
  if (i == dag.size()-1) return ans;
  reached[i] = true;

  rep (j, dag[0].size()) {
    if (dag[i][j] != 0) {
      return search(dag, reached, j, ans+dag[i][j]);
    }
  }

  return 0;
}


int main() {
  int n, m, a, b, c;
  cin >> n >> m;
  vector<vector<long long>> dag = utils::empty<long long>(n, n);
  rep (i, m) {
    cin >> a >> b >> c;
    dag[--a][--b] = c;
  }

  long long ans = 0;
  vector<bool> reached(n);
  fill(reached.begin(), reached.end(), false);

  bool cyclic = dfs(dag, reached, 0);

  if (cyclic) {
    cout << "inf" << endl;
  }
  else {
    fill(reached.begin(), reached.end(), false);
    ans = search(dag, reached, 0, ans);
    cout << ans << endl;
  }

}
