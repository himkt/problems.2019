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
  vector<bool> holiday(366);
  rep (i, holiday.size()) holiday[i] = false;

  int k = 0;

  rep (month, days.size()) {
    rep (day, days[month]) {
      if (k % 7 == 0 || (k+1) % 7 == 0) holiday[k] = true;
      k++;
    }
  }

  int n, m, d;
  char c;

  cin >> n;

  rep (i, n) {
    cin >> m >> c >> d;

    int p = (m-1)*days[m-1] + (d-1);

    if (holiday[p]) {
      rep (i, 366) {
        if (!holiday[p+i]) {
          holiday[p+i] = true;
          break;
        }
      }
    }
    else {
      holiday[p] = true;
    }
  }


  int ans = 0;
  int j = 0;

  rep (i, holiday.size()) {
    if (holiday[i]) j++;
    if (! holiday[i]) {
      ans = max(j, ans);
      j = 0;
    }
  }

  cout << ans << endl;
}
