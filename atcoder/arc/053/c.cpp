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
 
int N, a, b;

pair<int, int> D[100000];
pair<int, int> U[100000];

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N;

  int current = 0, ans = 0;
  int x = 0, y = 0;

  rep(i, N) {
    cin >> a >> b;

    // bのほうが大きい （唱えたあとで温度が減少する）
    if (b - a > 0) {
      D[x].first = a;
      D[x].second = b;
      x++;
    }
    else {
      U[y].first = b;
      U[y].second = a;
      y++;
    }

  }

  sort(D, D+x+1);
  sort(U, U+y+1);

  rep (i, x+1) {
    current += D[i].first;
    ans = max(current, ans);
    current -= D[i].second;
  }

  irep (i, y+1) {
    current += U[i].second;
    ans = max(current, ans);
    current -= U[i].first;
  }

  cout << ans << endl;
}
