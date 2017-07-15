//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int d = 4;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
  int r, c;
  cin >> r >> c;
  int sx, sy;
  int gx, gy;
  cin >> sy >> sx;
  cin >> gy >> gx;
  sx--; sy--; gx--; gy--;

  vector<vector<char>> maze(r, vector<char>(c));
  vector<vector<int>>  cost(r, vector<int>(c));
  rep (i, r) rep (j, c) cin >> maze[i][j];

  queue<pair<pair<int, int>, int>> que;
  que.push(make_pair(make_pair(sx, sy), 0));
  maze[sx][sy] = '#';
  cost[sx][sy] = 0;

  while (!que.empty()) {
    pair<pair<int, int>, int> q = que.front(); que.pop();
    int cx = q.first.first;
    int cy = q.first.second;
    int t = q.second;
    maze[cx][cy] = '@';
    cost[cx][cy] = t;
    cout << endl;
    rep (i, r) {
      rep (j, c) cout << maze[i][j] << ' ';
      cout << endl;
    }
    cout << endl;
    cout << "current x: " << cx << ", y: " << cy << endl;
    maze[cx][cy] = '#';

    rep(i, 4) {
      int nx = cx + dx[i];
      int ny = cy + dy[i];
      cout << "candidate next x: " << nx << ", next y: " << ny << endl;

      if (1<=nx && 1<=ny && nx<=c && ny<=r && maze[nx][ny] == '.') {
        cout << "next x: " << nx << ", next y: " << ny << endl;
        que.push(make_pair(make_pair(nx, ny), t+1));
        maze[cx][cy] = '#';
      }
    }
  }

  cout << "ans" << endl;
  cout << cost[gy][gx] << endl;

  return 0;
}

