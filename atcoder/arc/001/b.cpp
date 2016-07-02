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
typedef pair<int, int> P;

const int INF = 1001001001;

int fin(int n) {
  int ret = 0;
  if (n == 10 || n == 5 || n == 1) {
    ret = 1;
  }
  else if (n == 9 || n == 6 || n == 4 || n == 2) {
    ret = 2;
  }
  else if (n == 8 || n == 7 || n == 3) {
    ret = 3;
  }

  return ret;
}

int main() {
  int a, b, ans;
  cin >> a >> b;

  while (abs(b - a) > 10) {
    a += b > a ? 10 : -10;
    ans++;
  }

  cout << ans + fin(abs(b-a)) << endl;
}
