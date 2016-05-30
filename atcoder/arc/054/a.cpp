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


int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);
  int L, X, Y, S, D;
  double forward, backward;

  cin >> L >> X >> Y >> S >> D;

  if (D >= S) {
    forward = D - S;
    backward = L - forward;
  }
  else {
    backward = S - D;
    forward = L - backward;
  }

  double ans1, ans2, ans;
  ans1 = forward / (X+Y);
  ans2 = backward / (X-Y);

  cout << ans1 << endl << ans2 << endl;

  cout << min(ans1, ans2) << endl;
}
