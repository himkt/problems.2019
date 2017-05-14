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
 
template <typename T>
void show_all(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j];
    }
    cout << endl;
  }
}
 
int main() {
 
  int N;
  long long T;
  cin >> N >> T;
 
  vector<long long> t(N);
  vector<long long> a(N);
 
  rep (i, N) cin >> t[i];
 
  long long l = 0;
  long long ans = 0;
 
  rep (i, N-1) {
    if (l + T > t[i+1]) {
      ans += t[i+1] - l;
    } else {
      ans += T;
    }

    l = t[i+1];
  } 
 
  ans += T;
 
  cout << ans << endl;
}
