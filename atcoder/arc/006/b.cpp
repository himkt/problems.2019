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
 
int n, l;
 
int main() {
  cin >> n >> l;
  cin.ignore();
  vector<string> lots(l);
  rep (i, l) {
    getline(cin, lots[i]);
  }
  reverse(lots.begin(), lots.end());
  
  string o;
  getline(cin, o);
 
  int o_i;
 
  rep (i, o.size()) {
    if (o[i] == 'o') {
      o_i = (2 + i) / 2;
    }
  }
 
  rep (i, lots.size()) {
    rep (j, lots[i].size()) {
      if (j % 2 == 1) {
        if (lots[i][j] == '-') {
          if (o_i == (j + 1) / 2) {
            o_i = (j + 3) / 2;
          }
          else if (o_i == (j + 3) / 2) {
            o_i = (j + 1) / 2;
          }
        }
      }
    }
  }
 
  cout << o_i << endl;
}
