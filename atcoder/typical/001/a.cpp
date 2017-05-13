# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

// namespace utils
namespace utils{
  template <typename T> void print(vector<vector<T>> mat) {
    rep (i, mat.size()) {
      rep (j, mat[0].size()) cout << mat[i][j] << ' ';
      cout << endl;
    }
  }

  template <typename T> void print(vector<T> v) {
    rep (i, v.size()) cout << v[i] << ' ';
    cout << endl;
  }
// end namespace utils
}

void search(vector<vector<char>> &maze, vector<vector<bool>> &reached, int x, int y) {
  if (x < 0 || y < 0 || maze.size() <= x || maze[0].size() <= y || maze[x][y] == '#' || reached[x][y]) return;
  reached[x][y] = true;
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};

  rep (t, 4) {
    int nx = x + dx[t];
    int ny = y + dy[t];
    search(maze, reached, nx, ny);
  }
}


int main() {
  int h, w, sx, sy, gx, gy;
  cin >> h >> w;

  vector<vector<char>> maze;
  vector<vector<bool>> reached;
  maze.resize(h);
  reached.resize(h);

  rep (i, h) maze[i].resize(w);
  rep (i, h) reached[i].resize(w);

  rep (i, h) rep(j, w) cin >> maze[i][j];
  rep (i, h) rep(j, w) reached[i][j] = false;

  rep (i, h) rep(j, w) {
    if (maze[i][j] == 's') {
      sx = i;
      sy = j;
    }
    if (maze[i][j] == 'g') {
      gx = i;
      gy = j;
    }
  }

  search(maze, reached, sx, sy);
  // utils::print(maze);
  // utils::print(reached);

  if (reached[gx][gy]) cout << "Yes" << endl;
  else cout << "No" << endl;
}
