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

  string S;
  cin >> S;

  vector<char> p = {'N', 'W', 'S', 'E'};
  map<char, int> dict;

  rep (i, p.size()) dict[p[i]] = 0;

  rep (i, S.size()) dict[S[i]]++;

  if (((dict['S'] > 0 || dict['N'] > 0) && dict['S'] * dict['N'] == 0) ||
      ((dict['W'] > 0 || dict['E'] > 0) && dict['W'] * dict['E'] == 0 )) {
    cout << "No" << endl;
  }
  else {
    cout << "Yes" <<endl;
  }
}
