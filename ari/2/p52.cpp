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
 
int n, W;
int w[100], v[100];


int rec (int i, int j) {
  int res;

  if (i == n) {
    res = 0;
  }
}


int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> n;

  rep (i, n) {
    cin >> w[i] >> v[i];
  }

  cin >> W;
}
