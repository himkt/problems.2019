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

using namespace std;
const int INF = 1001001001;

int main(int argc, char const *argv[]) {
  int l, x, y, s, d;
  int length_1, length_2;
  double ans;
  cin >> l >> x >> y >> s >> d;

  length_1 = (l + d - s) % l;
  length_2 = (l + s - d) % l;

  if ( x <= y ) {
    ans = min((double)length_1 / (x + y), (double)length_2 / (y - x));
  }
  else {
    ans = double(length_1) / (x + y);
  }

  cout << fixed << setprecision(10) << ans << endl;
}
