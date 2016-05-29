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

vector<pair<int, int>> Box;
vector<pair<int, int>> Box2;
pair<int, int> pr;
int N, w, h;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N;

  rep (i, N) {
    cin >> w >> h;
    Box.push_back(make_pair(w, h));
  }

  sort(Box.begin(), Box.end());

  rep (i, N) {
    pr = make_pair(Box[i].second, Box[i].first);
    Box2.push_back(pr);
  }

  int ij = 0;

  rep (i, N) {
    if (Box2[i].first == Box2[i+1].first) {
      ij++;
    }
    else {
      sort(Box2.begin() + i, Box2.begin() + i + ij);
      ij = 0;
    }
  }

  int ans = 1;
  vector<int> result;
  int w_i, h_i, w_j, h_j;

  pair<int, int> current = make_pair(Box2[Box2.size()-1].first, Box2[Box2.size()-1].second);

  rep (i, N) {
    if (current.first > Box2[Box2.size()-i-1].first && current.second > Box2[Box2.size()-i-1].second) {
      current = make_pair(Box2[Box2.size()-i-1].first, Box2[Box2.size()-i-1].second);
      ans++;
    }
  }

  pair<int, int> current2 = make_pair(Box2[0].first, Box2[0].second);
  int ans2;

  rep (i, N) {
    if (current.first < Box2[i+1].first && current.second < Box2[i+1].second) {
      current = make_pair(Box2[i+1].first, Box2[i+1].second);
      ans2++;
    }
  }

  cout << max(ans, ans2) << endl;
}
