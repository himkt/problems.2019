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


int main() {
  long long n, a, b;
  cin >> n >> a >> b;

  vector<long long> h(n);
  rep (i, n) cin >> h[i];

  int ans = 0;

  if (n == 1) {
    ans = (h[0] + 1) / 2;
  }
  else {
    while (1) {
      sort(h.begin(), h.end());
      reverse(h.begin(), h.end());
      utils::print(h);

      if (h[0] > h[1]) {
        int k = (1 + (h[0] - h[1])) / (a - b);
        h[0] -= k*a;
        rep (i, n-1) {
          h[i] -= k*b;
        }
        ans += k;
        // cout << k << endl;
      }
      else if (h[0] < h[1]) {
        int k = (1 + (h[1] - h[0])) / (a - b);
        h[0] -= k*b;
        rep (i, n-1) {
          h[i] -= k*b;
        }
        h[1] -= k*a;
        ans += k;
        // cout << k << endl;
      }

      else {
        h[0] -= a;
        h[1] -= b;
        ans++;
      }

      if (h[0] <= 0 && h[1] <= 0) {
        break;
      }

    }
  }
  cout << ans << endl;
}
