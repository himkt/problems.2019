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

int N, M;

int main() {
  cin >> N >> M;

  vector<int> P(N-1);
  vector<int> B(M);
  vector<int> C(M);

  rep (i, N) {
    cin >> P[i];
  }

  rep (i, M) {
    cin >> B[i] >> C[i];
  }
}
