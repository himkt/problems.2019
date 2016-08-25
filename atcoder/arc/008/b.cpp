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
 
 
int main() {
  int n, m;
  int ans = 0;
  cin >> n >> m;
  vector<char> name(n), kit(m);
 
  rep (i, n) {
    cin >> name[i];
  }
 
  rep (i, m) {
    cin >> kit[i];
  }
 
  sort(name.begin(), name.end());
  sort(kit.begin(), kit.end());
 
  map<char, int> name_d, kit_d;
 
  rep (i, name.size()) {
    if (name_d.find(name[i]) == name_d.end()) {
      name_d[name[i]] = 1;
    }
    else {
      name_d[name[i]]++;
    }
  }
 
  rep (i, kit.size()) {
    if (kit_d.find(kit[i]) == kit_d.end()) {
      kit_d[kit[i]] = 1;
    }
    else {
      kit_d[kit[i]]++;
    }
  }
 
  for (pair<char, int> p : name_d) {
    // すべてのp.secondを最低何回で0以下にできるか
    int num_kit = kit_d[p.first];
    int i = 1;
 
    while (1) {
      if (num_kit == 0) {
        ans = 1001001001;
        break;
      }
      if (i * num_kit >= p.second) {
        ans = max(ans, i);
        i = 1;
        break;
      }
      else {
        i++;
      }
    }
  }
 
  if (ans == 1001001001) {
    cout << -1 << endl;
  }
  else {
    cout << ans << endl;
  }
}
