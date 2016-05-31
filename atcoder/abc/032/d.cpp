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
 
int N, W;
int v[200], w[200];
long long res;
 
long long dfs(int i, int j) {
  cout << j << endl;
 
  if (i == N) {
    res = 0;
  }
  else if (j < w[i]) {
    res = dfs(i+1, j);
  }
  else {
    res = max(dfs(i+1, j), dfs(i+1, j-w[i])+v[i]);
  }
 
  return res;
}
 
 
int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);
 
  cin >> N >> W;
 
  rep(i, N) {
    int a, b;
    cin >> a >> b;
    v[i] = a;
    w[i] = b;
  }
 
  cout << dfs(0, W) << endl;
}
