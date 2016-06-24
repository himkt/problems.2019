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

int r = 0;

int dfs(int current, int previous, vector<vector<int>> &graph, vector<int> &h) {
  for (int next: graph[current]) {
    if (next == previous) {
      continue;
    }
    r += dfs(next, current, graph, h);
  }

  if (r == 0 && h[current] == 0) {
    return 0;
  }
  else {
    return r + 2;
  }
}

int main() {
  int n, x, a, b;

  cin >> n >> x;
  --x;

  vector<vector<int>> graph(n);
  vector<int> h(n);

  rep (i, n) {
    cin >> h[i];
  }

  rep (i, n-1) {
    cin >> a >> b;
    --a; --b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  cout << dfs(x, -1, graph, h) << endl;
}
