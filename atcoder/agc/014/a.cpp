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


int solve(int a, int b, int c) {
  if (a%2!=0 || b%2!=0 || c%2!=0) return 0;

  bool cond1 = ((a+b)/2 == c && (b+c)/2 == a);
  bool cond2 = ((b+c)/2 == a && (c+a)/2 == b);
  bool cond3 = ((c+a)/2 == b && (a+b)/2 == c);
  if (cond1 || cond2 || cond3) return -1;

  int ans = 0;
  while (a%2==0&&b%2==0&&c%2==0) {
    int na, nb, nc;
    na = b/2 + c/2;
    nb = c/2 + a/2;
    nc = a/2 + b/2;
    a = na;
    b = nb;
    c = nc;
    ans++;
  }

  return ans;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << solve(a, b, c) << endl;
}
