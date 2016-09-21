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

vector<int> days = {31, 29, 31, 30, 31, 30, 31, 30, 31, 31, 30, 31};

int main() {
  vector<vector<bool>> holidays(12);
  rep (i, days.size()) {
    holidays[i] = vector<bool>(days[i]);
    rep (j, days[i]) holidays[i][j] = false;
  }

  int k = 1;
  rep (i, days.size()) {
    rep (j, days[i]) {
      if (k % 7 == 1 || k % 7 == 0) {
        holidays[i][j] = true;
      }
      k++;
    }
  }

  int n, m, d;
  char c;

  cin >> n;
  rep (i, n) {
    cin >> m >> c >> d;

    if (holidays[m-1][d-1]) {
      // 振替
      while (true) {

        if (!holidays[m-1][d-1]) {
          holidays[m-1][d-1] = true;
          break;
        }

        if (d-1 == days[m-1]) {
          if (m == 12) break;
          m++;
          d = 0;
        }

        d++;
      }


    }
    else {
      holidays[m-1][d-1] = true;
    }
  }

  int ans = 0;
  int max_p = 0;

  rep (i, days.size()) {
    rep (j, days[i]) {
      if (holidays[i][j]) {
        max_p++;
      }
      else {
        ans = max(ans, max_p);
        max_p = 0;
      }
    }
  }

  cout << ans << endl;
}
