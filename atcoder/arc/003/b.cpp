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

int main() {
  int n;
  cin >> n;
  string s;
  vector<string> S(n);

  rep (i, n) {
    cin >> s;
    reverse(s.begin(), s.end());
    S[i] = s;
  }

  sort(S.begin(), S.end());

  rep (i, n) {
    s = S[i];
    reverse(s.begin(), s.end());
    cout << s << endl;
  }
}
