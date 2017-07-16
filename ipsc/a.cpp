# include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int r, c, f;
  cin >> r >> c >> f;
  vector<vector<char>> board(r, vector<char>(c, 'w'));

  rep (i, r) {
    rep (j, c) {
      cout << i << j << endl;;
    }
  }
}
