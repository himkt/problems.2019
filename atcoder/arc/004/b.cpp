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

int N;
vector<int> d;
int d_i;

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

  cin >> N;

  rep (i, N) {
    cin >> d_i;
    d.push_back(d_i);
  }

  int ans_max = 0;
  int ans_min = 0;

  rep (i, N) {
    ans_max += d[i];
  }

  cout << ans_max << endl;

  sort(d.begin(), d.end());
  int max_d_ = d.back();
  int sum_ = ans_max - max_d_;
  if (sum_ >= max_d_) {
    cout << 0 << endl;
  }
  else {
    cout << max_d_ - sum_ << endl;
  }
}
