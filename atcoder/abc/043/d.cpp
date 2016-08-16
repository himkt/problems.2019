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

void solve(string s) {
  rep (i, s.size() - 1) {
    if (s[i] == s[i+1]) {
      cout << i+1 << " " << i+2 << endl;
      return ;
    }

    if (i < s.size() - 2) {
      if (s[i] == s[i+2]) {
        cout << i+1 << " " << i+3 << endl;
        return ;
      }
    }
  }
  cout << "-1 -1" << endl;
}

int main() {
  string s;
  cin >> s;

  solve(s);
}
