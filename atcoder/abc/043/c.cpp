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


int main() {

  int N;
  cin >> N;

  vector<int> A(N);
  rep (i, N) cin >> A[i];

  double mean = 0.0;
  rep (i, N) mean += A[i];
  mean /= A.size();
  mean = roundf(mean);

  ll ans = 0;

  rep (i, N) {
    ans += pow(A[i] - mean, 2);
  }

  cout << ans << endl;
}
