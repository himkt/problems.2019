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

using namespace std;
 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
 
string S;
int n;
char s[100000];

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> S;

  n = S.length();

  rep (i, n) {
   s[i] = S[i];
  }

  sort(s, s+n);

  rep (i, n) {
    cout << s[i];
  }
}
