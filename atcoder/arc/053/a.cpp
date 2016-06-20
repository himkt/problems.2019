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

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)

int h, w;
int row, column;


int fac(int n) {
  if (n <= 1) return 1;
  return n * fac(n - 1);
}

int c(int i, int j) {
  return fac(i) / (fac(i - j) * fac(j));
}

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> h >> w;

  int a = (h - 1) * w;
  int b = (w - 1) * h;

  cout << a + b << endl;
}
