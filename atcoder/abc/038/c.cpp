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

int N;
vector<int> A;
int a;
long long ans = 0;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N;

  rep (i, N) {
    cin >> a;
    A.push_back(a);
  }

  ans = 0;

  int length = 1;
  vector<int> result;

  rep (i, N) {
    if (A[i+1] > A[i]) {
      length++;
    }
    else {
      result.push_back(length);
      length = 1;
    }
  }

  if (length != 1) {
    result.push_back(length);
  }

  rep (i, result.size()) {
    ans += (result[i] * (result[i] + 1)) / 2;
  }

  cout << ans << endl;
}
