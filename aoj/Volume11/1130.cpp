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
int ans, w, h;

template<typename T>
void show_all(vector<vector<T>> maze) {
  rep (i, maze.size()) {
    rep (j, maze[0].size()) {
      cout << maze[i][j] << " ";
    }
    cout << endl;
  }
}


int dfs(int i, int j, vector<vector<char>> maze) {
  vector<vector<int>> move_ = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

  rep (k, move_.size()) {
    int next_i = i + move_[k][0];
    int next_j = j + move_[k][1];

    if (maze[next_i][next_j] == '.') {
      ans++;
      maze[next_i][next_j] = '#';
      dfs(next_i, next_j, maze);
    }
  }

  cout << endl;
  show_all(maze);
  return ans;
}



int main() {

  while (cin >> w >> h && w && h) {
    ans = 0;
    int init_i, init_j;

    vector<vector<char>> maze = vector<vector<char>>(h);
    rep (i, h) maze[i] = vector<char>(w);
    rep (i, h) {
      rep (j, w) {
        cin >> maze[i][j];
        if (maze[i][j] == '@') {
          init_i = i;
          init_j = j;
        }
      }
    }

    show_all(maze);
    cout << dfs(init_i, init_j, maze) << endl;
  }
}
