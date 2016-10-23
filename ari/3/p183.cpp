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

typedef vector<int> vec;
typedef vector<vec> mat;

void pretty_print(vector<vector<int>> g) {
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


int main() {
  int n, k;
  cin >> n >> k;

  mat g(n, vec(n));

  rep (i, n) {
    rep (j, n) {
      cin >> g[i][j];
    }
  }

  mat c = g;

  rep (i, k-1) {
    g = mul(g, c);
  }

  int ans = 0;
  rep (i, g.size()) {
    rep (j, g[0].size()) {
      ans += g[i][j];
    }
  }

  cout << ans << endl;
}
