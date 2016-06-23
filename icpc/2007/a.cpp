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
typedef pair<int, int> P;

const int INF = 1001001001;
int n;

int solve(int n) {
  vector<int> scores;

  rep (i, n) {
    int ai;
    cin >> ai;
    scores.push_back(ai);
  }

  sort(scores.begin(), scores.end());
  int result = 0;

  FOR (i, 1, scores.size()-1) {
    result += scores[i];
  }

  return result / (scores.size() - 2);
}


int main() {
  while (cin >> n) {
    if (n != 0) cout << solve(n) << endl;
  }
}
