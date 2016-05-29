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

int H1, W1, H2, W2;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> H1 >> W1 >> H2 >> W2;

  if (H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
