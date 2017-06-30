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
 
 
const int OFFSET = 300;
 
int main() {
  int t, n;
  int cx, cy;
  int sx, sy;
 
  vector<int> dx = {1, 1, 0, -1, -1, 0};
  vector<int> dy = {1, 0, -1, -1, 0, 1};
 
  queue<pair<pair<int, int>, int>> s;
 
  while (cin >> t >> n && (t || n)) {
    vector<vector<bool>> visited = utils::empty<bool>(1000, 1000);
    rep (i, 1000) fill(visited[i].begin(), visited[i].end(), false);
 
    rep (i, n) {
      cin >> cx >> cy;
      cx += OFFSET; cy += OFFSET;
      visited[cx][cy] = true;
    }

    cin >> sx >> sy;
    sx += OFFSET;
    sy += OFFSET;

    //initialize
    s.push(make_pair(make_pair(sx, sy), 0));
    int ans = 0;
 
    while (!s.empty()) {
      pair<pair<int, int>, int> q = s.front(); s.pop();
      int cx = q.first.first;
      int cy = q.first.second;
      int turn = q.second;


      // if (cx < 0 || cy < 0 || cx >= 60 || cy >= 60 || visited[cx][cy]) continue;
      if (visited[cx][cy]) continue;
      ans++;
      visited[cx][cy] = true;
 
      rep (i, 6) {
        int nx = cx + dx[i];
        int ny = cy + dy[i];
 
        if (turn < t) {
          s.push(make_pair(make_pair(nx, ny), turn+1));
        }
      }
    }
    cout << ans << endl;
  }
}
