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


// %% begin matrix %%

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

// %% end matrix %%


int main() {
  int ans = 0;
  int n, a;
  cin >> n >> a;
  vector<int> x(n);
  rep (i, n) cin >> x[i];

  rep (i, 1<<n) {
    int s = 0;
    int t = 0;

    rep (j, n) {
      // bit dpの ((i>>j)%2==0 & 1)の& 1って何
      if ((i>>j)%2) {
        s += x[j];
        t++;
      }
    }

    if (t > 0 && float(s)/t == float(a)) {
      ans++;
    }
  }

  cout << ans << endl;
}
