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


const long long d = 1000000000 + 7;

long long factorial(long long n) {
  if (n>1) return (n%d) * factorial(n-1);
  return 1;
}

int main() {
  long long n, m;
  cin >> n >> m;

  long long ans = 1;

  long long fn = 1;
  long long fm = 1;

  for (long long i=1; i<=n; i++) {
    fn = (fn * (i%d)) % d;
  }
  fn %= d;

  for (long long i=1; i<=m; i++) {
    fm = (fm * (i%d)) % d;
  }
  fm %= d;

  // cout << fn << endl;
  // cout << fm << endl;


  if (abs(n-m) > 1) {
    ans = 0;
  }
  else {
    if (n == m) ans *= 2;
    ans *= (fm * fn);
    ans %= d;
  }

  cout << ans << endl;
}
