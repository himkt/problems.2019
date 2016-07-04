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

int n;
vector<P> a;

int main() {
  int index = 1;
  ll val;
  cin >> n;

  rep (i, n) {
    cin >> val;
    a.push_back(make_pair(val, i+1));
  }

  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  rep (i, n) {
    cout << a[i].second << endl;
  }
}
