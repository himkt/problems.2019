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

// %% NOTE : begin matrix %%
typedef vector<int> vec;
typedef vector<vec> mat;

void pretty_print(mat g) {
  rep (i, g.size()) {
    rep (j, g[0].size()-1) {
      cout << g[i][j] << ' ';
    }
    cout << g[i][g[0].size()-1] << endl;
  }
}

mat mul(mat A, mat B) {
  mat C(A.size(), vec(B.size()));
  rep (i, A.size()) {
    rep (k, B.size()) {
      rep (j, B[0].size()) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return C;
}
// %% NOTE : end matrix %%


typedef long long ll;


int main() {
  int n;
  cin >> n;

  vector<vector<int>> mat(n);
  rep (i, n) {
    vec v = vector<int>(n);
    rep (j, n) v[j] = 0;
    mat[i] = v;
  }

  int a;
  rep (i, n) {
    cin >> a;
    a--;

    mat[i][a]++;
    mat[a][i]++;
  }

  int ans = 0;

  rep (i, n) {
    // for (int j = 0; j < n - i ; j++) {
    rep (j, n) {
      ans += mat[i][j] / 2;
    }
  }

  cout << ans / 2 << endl;
}
