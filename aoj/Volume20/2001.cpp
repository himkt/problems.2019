//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

typedef multimap< int, pair<int, int> > HL;

int main() {
  int n, m, ans;
  int h, p, q;

  while (cin >> n >> m >> ans, n && m && ans) {
    set<int> hs;
    multimap<int, pair<int, int>> hl;

    rep (i, m) {
      cin >> h >> p >> q;
      hs.insert(h);
      hl.insert(make_pair(h, make_pair(p, q)));
    }

    for (set<int>::reverse_iterator sit=hs.rbegin(); sit!=hs.rend(); sit++) {
      int hhead = *sit;

      for (multimap<int, pair<int, int>>::iterator it = hl.lower_bound(hhead); it != hl.upper_bound(hhead); it++) {
        pair<int, int> v = it->second;
        if (v.first == ans) {
          ans = v.second;
          break;
        }
        else if (v.second == ans ) {
          ans = v.first;
          break;
        }
      }
    }

    cout << ans << endl;
  }
  return 0;
}

