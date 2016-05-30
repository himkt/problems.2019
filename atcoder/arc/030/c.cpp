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

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)

using namespace std;
const int INF = 1e8;

int factorial(int i) {
  if (i < 1) return 1;
  return i * factorial(i-1);
}

int permutation(int k, int c) {
  return factorial(k) / factorial(k - c);
}

int combination(int k, int c) {
  return factorial(k) / (factorial(c) * factorial(k - c));
}


int A[300][300];
int n, m, k;
int a, b;
char c[300];
char ans[300];
int max_tail = 0;

void dfs(int i, int tail, char output[]) {
  if (k == tail+1) {
    rep (i, tail+1) {
      if (ans[i] > output[i]) {
        break;
      }
    }
    rep (i, tail+1) {
      ans[i] = output[i];
    }
  }
  rep (k, n) {
    if (A[i][k] != 0) {
      char tmp[300];
      rep (p, tail+1) {
        tmp[p] = output[p];
      }
      tmp[tail+1] = c[k];
      max_tail = max(max_tail, tail+1);
      dfs(k, tail+1, tmp);
    } 
  }
  return ;
}



int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> n >> m >> k;

  rep (i, n) {
    cin >> c[i];
  }

  rep (i, m) {
    cin >> a >> b;
    A[a-1][b-1] = 1;
  }

  char answer[k];
  rep (i, k) {
    answer[i] = 'z';
  }

  // A: 隣接行列(N x N)
  rep (i, n) {
    char output[n];
    output[0] = c[i];
    int tail = 0;
    dfs(i, tail, output);
  }

  if (max_tail < k) {
    cout << -1 << endl;
  }
  else {
    rep (i, k) {
      cout << ans[i];
    }
    cout << endl;
  }
}
