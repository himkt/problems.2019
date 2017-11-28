//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int solve(int d, int r, int k) {
  map<int, int> smax;
  map<int, int> smin;

  for (int x = 0; x <= d; x+=k) {
    smax[x] = r;
    smin[x] = r;
  }

  for (int x = 0; x <= d; x+=k) {
    for (int y = 0; y <= d; y+=k) {
      int w1 = (x-r)*(x-r) + (y-r)*(y-r);
      int w2 = r*r;

      if (w1 <= w2) {
        // cout << x << ", " << y << endl;
        smax[x] = max(smax[x], y);
        smin[x] = min(smin[x], y);
      }
    }
  }

  int ans = 0;
  int max_v = 0;
  for (pair<int, int> p : smax) {
    // cout << "x: " << p.first << ", max: " << smax[p.first] << ", min: " << smin[p.first] << ", ans: " << (smax[p.first] - smin[p.first]) / k << endl;;
    ans += (smax[p.first] - smin[p.first]) / k;
    max_v = max((smax[p.first] - smin[p.first]) / k, max_v);
  }

  return ans - max_v;
}

int main() {
  int x, y, r, k;
  cin >> k;

  int d1 = 200;
  int r1 = 100;
  int ans1 = solve(d1, r1, k);

  int d2 = 300;
  int r2 = 150;
  int ans2 = solve(d2, r2, k);

  cout << ans1 << " " << ans2 << endl;
  return 0;
}

