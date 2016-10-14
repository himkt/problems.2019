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

const int MAX_V = 101;

int cost[MAX_V][MAX_V];
int mincost[MAX_V];
bool used[MAX_V];
int V;


int prim() {

  // initialize
  rep (i, V) {
    mincost[i] = 1001001;
    used[i] = false;
  }

  mincost[0] = 0;
  used[0] = true;
  int res = 0;


  // calculate
  while (1) {
    int v = -1;

    rep (u, V) {
      if (!used[u] && (v == -1 || mincost[u] < mincost[v])) {
        v = u;
      }
    }

    if (v == -1) break;

    used[v] = true;
    res += mincost[v];

    rep (u, V) {
      mincost[u] = min(mincost[u], cost[v][u]);
    }
  }

  return res;
}


int main() {
}
