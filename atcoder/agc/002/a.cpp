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
 
long long a, b;
 
int main() {
  cin >> a >> b;
 
  if (a * b <= 0) {
    cout << "Zero" << endl;
  }
  else if (a > 0) {
    cout << "Positive" << endl;
  }
  else if (b < 0) {
    if ((b - a) % 2 == 0) {
      cout << "Negative" << endl;
    }
    else {
      cout << "Positive" << endl;
    }
  }
}
