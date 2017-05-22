# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

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

  template <typename T> pair<T, T> shape(vector<vector<T>> mat) {
    int d1, d2;

    d1 = mat.size();
    if (d1 > 0) d2 = mat[0].size();
    else int d2 = 0;
    cout << "(" << d1 << ", " << d2 << ")" << endl;
    return make_pair(0, 0);
  }

  template <typename T> vector<vector<T>> empty(int n, int m) {
    vector<vector<T>> mat(n, vector<T>(m));
    return mat;
  }
}


bool check(vector<vector<char>> &maze, int i, int j) {
  if (0 <= i && 0 <= j && i < (int)maze.size() && j < (int)maze[i].size() && maze[i][j] == '.') return true;
  return false;
}

int main() {
  int R, C, sy, sx, gy, gx;
  cin >> R >> C >> sy >> sx >> gy >> gx;
  sy--; sx--; gy--; gx--;

  vector<vector<char>> maze = utils::empty<char>(R, C);
  vector<vector<int>> score = utils::empty<int>(R, C);

  rep (i, R) rep (j, C) cin >> maze[i][j];
  rep (i, R) fill(score[i].begin(), score[i].end(), 0);

  queue<pair<int, int>> next_point;
  next_point.push(make_pair(sy, sx));

  vector<int> dy = {0, 1, 0, -1};
  vector<int> dx = {-1, 0, 1, 0};

  while (!next_point.empty()) {
    int cy = next_point.front().first;
    int cx = next_point.front().second;

    rep (i, 4) {
      int ny = cy + dy[i];
      int nx = cx + dx[i];

      if (check(maze, ny, nx) && score[ny][nx] == 0) {
        score[ny][nx] = score[cy][cx] + 1;
        next_point.push(make_pair(ny, nx));
      } 
    }

    next_point.pop();
  }

  // utils::print(score);
  cout << score[gy][gx] << endl;
}
