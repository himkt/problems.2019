//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int h, w, n;
vector<int> a;
vector<vector<int>> field;
vector<vector<bool>> visited;


void fill_color(int i, int j, int color, int rest) {
  if (rest <= 0) return;

  visited[i][j] = true;
  field[i][j] = color;

  vector<int> dx = {-1, 0, 1, 0};
  vector<int> dy = {0, 1, 0, -1};

  rep (k, 4) {
    if (i + dy[k] >= 0 && i + dy[k] < h) {
      if (j + dx[k] >= 0 && j + dx[k] < w) {
        if (rest <= 0) return;
        if (visited[i+dy[k]][j+dx[k]]) continue;
        fill_color(i+dy[k], j+dx[k], color, --rest);
      }
    }
  }
}


int main() {
  cin >> h >> w >> n;

  a.resize(n);
  rep (i, n) cin >> a[i];

  field.resize(h);
  rep (i, h) field[i].resize(w);

  visited.resize(h);
  rep (i, h) visited[i].resize(w);

  rep (i, n) {
    int rest = a[i];
    int color = i + 1;
    int sx, sy;
    bool determined = false;

    rep (j, h) {
      rep (k, w) {
        if (!visited[j][k]) {
          sx = j;
          sy = k;
          determined = true;
          break;
        }
      }
      if (determined) break;
    }

    fill_color(sx, sy, color, rest);
  }

  rep (i, h) {
    rep (j, w) {
      cout << field[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}

