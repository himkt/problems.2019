//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int N;
  int ans = 0;

  cin >> N;
  vector<int> a(N);
  rep (i, N) cin >> a[i];

  map<int, int> c;
  rep (i, N) c[a[i]]++;

  for (pair<int, int> c_i : c) {
    int current = c_i.first;
    int prev_ = c_i.first - 1;
    int next_ = c_i.first + 1;

    int ans_ = c[current];
    if (c.end() != c.find(prev_)) ans_ += c[prev_];
    if (c.end() != c.find(next_)) ans_ += c[next_];

    ans = max(ans, ans_);
  }

  cout << ans << endl;
  return 0;
}

