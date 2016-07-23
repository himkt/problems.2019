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


int a, b, c;
int ans;

int main() {
  cin >> a >> b >> c;


  if ((a == 5 && b == 5 && c == 7) || (a == 5 && b == 7 && c == 5) || (a == 7 && b == 5 && c == 5)) {
      cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
