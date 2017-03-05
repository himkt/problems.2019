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

long long update_score(long long n, long long m) {
  return min(n, m / 2);
}

int main() {
  long long s, c, n, m;
  cin >> n >> m;
  s = n;
  c = m;
  long long score = 0;

  rep (i, m) {

    if (c >= 0) {
      long long new_score = update_score(s, c);

      if (score > new_score) {
        break;
      } else {
        score = new_score;
      }
    }

    s += 1;
    c -= 2;
  }

  cout << score << endl;
}
