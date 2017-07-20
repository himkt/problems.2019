//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int solve(int n, int a, int b, int c, int x, vector<int> &y, vector<int> &z) {
  int head = 0;
  rep (t, 10000+1) {
    if (y[head] == z[t]) head++;
    if (head == n) return t;
  }
  return -1;
}

int main() {
  int n, a, b, c, x;
  vector<int> y;
  vector<int> z(10000);

  while(cin >> n >> a >> b >> c >> x, n) {
    y.resize(n); z[0] = x;
    rep (i, n) cin >> y[i];

    for (int i=1; i<=10000; i++) z[i] = (a*z[i-1] + b) % c;
    cout << solve(n, a, b, c, x, y, z) << endl;
  }
  return 0;
}

