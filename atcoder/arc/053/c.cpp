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
 
int N;
int a[100000];
int b[100000];

int current, max_n;
int ans = 0;

pair<int, int> D[10000];
pair<int, int> U[10000];

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N;

  int x = 0, y = 0;

  rep(i, N) {
    cin >> a[i] >> b[i];

    if (b[i] - a[i] > 0) {
      D[x].first = a[i];
      D[x].second = b[i];
      x++;
    }
    else {
      U[y].first = b[i];
      U[y].second = a[i];
      y++;
    }

    sort(D, D+x+1);
    sort(U, U+y+1);

    rep (i, x+1) {
      current += D[i].first;
      if (ans < current) ans = current;
      current -= D[i].second;
    }

    irep (i, y+1) {
      current += U[i].second;
      if (ans < current) ans = current;
      current -= U[i].first;
    }
  }
  cout << ans << endl;
}
