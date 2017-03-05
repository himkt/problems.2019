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
# define ll long long

using namespace std;

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  ll a1, a2;
  a1 = a*b;
  a2 = c*d;

  cout << max(a1, a2) << endl;
}
