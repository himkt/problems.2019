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


int main() {
  int n, k;
  cin >> n;
  vector<int> a(n);

  rep (i, n) cin >> a[i];
  cin >> k;

  int ub = -1, lb = n;

  while (lb - ub > 1) {
    int mid = (ub + lb) / 2;

    if (k < a[mid]) {
      lb = mid;
    }
    else if (a[mid] <= k) {
      ub = mid;
    }
  }

  cout << lb << endl;
}
