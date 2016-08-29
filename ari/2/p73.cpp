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


void pretty_print(vector<int> a) {
  rep (i, a.size()-1) cout << a[i] << ' ';
  cout << a[a.size()-1] << endl;
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
  int n, l, p;

  cin >> n >> l >> p;

  vector<int> a(n+1), b(n+1);

  rep (i, n) cin >> a[i] >> b[i];

  a[n] = l;
  b[n] = 0;
  n++;

  priority_queue<int> que;

  int ans = 0, pos = 0, tank = p;

  rep (i, n) {
    int d = a[i] - pos;

    while (tank - d < 0) {
      if (que.empty()) {
        cout << -1 << endl;
        return 0;
      }

      tank += que.top();
      que.pop();
      ans++;
    }

    tank -= d;
    pos = a[i];
    que.push(b[i]);
  }

  cout << ans << endl;
}
