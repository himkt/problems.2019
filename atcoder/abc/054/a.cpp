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

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)

// N is size of row
// M is size of column
// vector< vector<int> > Matrix(N, vector<int>(M, -1));

using namespace std;
const int INF = 1e8;

int factorial(int i) {
  if (i < 1) return 1;
  return i * factorial(i-1);
}

int permutation(int k, int c) {
  return factorial(k) / factorial(k - c);
}

int combination(int k, int c) {
  return factorial(k) / (factorial(c) * factorial(k - c));
}

int L, X, Y, S, D;
double ans;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> L >> X >> Y >> S >> D;

  int L_1 = D - S;
  if (L_1 < 0) L_1 *= -1;
  
  int L_2 = L - L_1;

  // 逆方向にすすめるか
  if ( Y < X ) {
    // 順方向だけ
    int Z_1 = Y + X;

    ans = double(L_1) / Z_1;
    ans = INF;
  }
  else {
    // 両方試して良いほう
    int Z_1 = Y + X;
    int Z_2 = Y - X;

    ans = min(double(L_1) / Z_1, double(L_2) / Z_2);
  }

  cout << ans << endl;
}
