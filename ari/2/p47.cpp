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

int N, R;
int X[1000];

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N >> R;

  rep (i, N) {
    cin >> X[i];
  }

  sort (X, X + N);

  int i = 1, ans = 0;

  while (i < N) {
  
    // カバーする
    int s = X[i++];
    while (i < N && X[i] <= s + R) i++;

    // いらない
    int p = X[i-1];
    while (i < N && X[i] <= p + R) i++;

    ans++;
  }

  cout << ans << endl;
}
