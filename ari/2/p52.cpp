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

using namespace std;
 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
 
int n, W, res;
int w[100], v[100];


int rec(int i, int j) {

  if (i == n) {
    res = 0;
  }
  else if (j < w[i]) {
    res = rec(i + 1, j);
  }
  else {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }

  return res;
}


int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> n;
  rep (i, n) {
    cin >> w[i] >> v[i];
  }
  cin >> W;

  cout << rec(0, W) << endl;
}
