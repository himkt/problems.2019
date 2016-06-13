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

# define rep(i, n) for (long long i = 0; i < (long long)(n); i++)
# define irep(i, n) for (long long i = long long(n) - 1; i >= 0; i--)

// N is size of row
// M is size of column
// vector< vector<long long> > Matrix(N, vector<long long>(M, -1));

using namespace std;
const long long INF = 1e8;
long long N;

long long factorial(long long i) {
  if (i < 1) return 1;
  return i * factorial(i-1);
}

long long permutation(long long k, long long c) {
  return factorial(k) / factorial(k - c);
}

long long combination(long long k, long long c) {
  return factorial(k) / (factorial(c) * factorial(k - c));
}

long long bsearch(long long x) {
  long long l = 0, r = x;

  while (l <= r) {

    long long m = (l + r) / 2;

    if (m*m*m*m == N) {
      return m;
    }
    else if (m*m*m*m > N) {
      r = m-1;
    }
    else if (m*m*m*m < N) {
      l = m+1;
    }
  }
  return -1;
}

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N;
  cout << bsearch(1000) << endl;
}
