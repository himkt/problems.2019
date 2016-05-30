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
int n_a, n_b;
int tail_d = 0;
vector<int> a, b, d;

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

bool include_k(int k) {
  rep (i, tail_d) {
    if (d[i] == k) return true;
  }
  return false;
}


int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> n_a >> n_b;

  rep (i, n_a) {
    int k;
    cin >> k;
    a.push_back(k);
    d.push_back(k);
  }

  rep (j, n_b) {
    int k;
    cin >> k;
    b.push_back(k);
    d.push_back(k);
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(d.begin(), d.end());

  set<int> A(a.begin(), a.end());
  set<int> B(b.begin(), b.end());
  set<int> D(d.begin(), d.end());

  float lenA = A.size();
  float lenB = B.size();
  float lenD = D.size();
  float lenE = lenA + lenB - lenD;

  cout << double(lenE) / lenD << endl;
}
