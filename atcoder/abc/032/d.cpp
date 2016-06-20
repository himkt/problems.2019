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
 

long long max(long long a, long long b) {
  return a > b ? a : b;
}


int N;
long long W;
long long v[200], w[200];
long long dp[201][1001];


long long rec(int i, int j) {
  long long res;

  if (dp[i][j] >= 0) {
    return dp[i][j];
  }

  if (i == N) {
    res = 0;
  }
  else if (j < w[i]) {
    res = rec(i+1, j);
  }
  else {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }

  return dp[i][j] = res;
}

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N >> W;

  rep (i, N) {
    long long a, b;
    cin >> a >> b;
    v[i] = a;
    w[i] = b;
  }

  rep (i, 201) {
    rep (j, 1001) {
      dp[i][j] = -1;
    }
  }

  cout << rec (0, W) << endl;
}
