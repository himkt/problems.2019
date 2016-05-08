#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
using namespace std;
 
#define all(c) (c).begin(), (c).end()
#define iter(c) __typeof((c).begin())
#define cpresent(c, e) (find(all(c), (e)) != (c).end())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define tr(c, i) for (iter(c) i = (c).begin(); i != (c).end(); ++i)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
 
const int INF = 10000;

int N, M, sx, sy, gx, gy;

char field[100][100];
int d[100][100];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

typedef pair<int, int> P;


int bfs() {
  queue<P> que;

  rep(i, N) {
    rep(j, M) {
      d[i][j] = INF;
    }
  }

  // init
  d[sx][sy] = 0;
  que.push(P(sx, sy));

  while (que.size()) {
    P p = que.front();
    que.pop();

    if (p.first == gx && p.second == gy) break;

    rep(i, 4) {
      int nx = p.first + dx[i];
      int ny = p.second + dy[i];

      // 移動できるか
      if (0 <= nx && nx < N & 0 <= ny && ny < M && field[nx][ny] != '#' && d[nx][ny] == INF) {
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }

  return d[gx][gy];
}


int main() {

  cin >> N >> M;

	rep(i, N) {
    rep(j, M) {
      cin >> field[i][j];
      if (field[i][j] == 'S') {
        sx = i, sy = j;
        field[i][j] = '.';
      }
      if (field[i][j] == 'G') {
        gx = i, gy = j;
        field[i][j] = '.';
      }
    }
  }

  int res = bfs();
  cout << res << endl;
}
