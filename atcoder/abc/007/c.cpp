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
const int INF = 1001001001;

typedef pair<int, int> P;
int H, W;
int sx, sy, gx, gy;

char maze[1000][1000];
int d[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs(int sx, int sy) {
  queue<P> que;

  rep (i, H) {
    rep (j, W) {
      d[i][j] = INF;
    }
  }

  que.push(P(sx, sy));
  d[sx][sy] = 0;

  while (que.size()) {
    P p = que.front(); que.pop();

    if (p.first == gx && p.second == gy) {
      break;
    }

    rep (i, 4) {
      int nx = p.first + dx[i], ny = p.second + dy[i];
      if ( 0 <= nx && nx < H && 0 <= ny && ny < W && maze[nx][ny] != '#' && d[nx][ny] == INF) {
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[gx][gy];
}

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> H >> W;
  cin >> sx >> sy;
  cin >> gx >> gy;
  --sx; --sy; --gx; --gy;

  rep (i, H) {
    rep (j, W) {
      cin >> maze[i][j];
    }
  }

  cout << bfs(sx, sy) << endl;
}
