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
typedef long long ll;
typedef pair<int, int> P;

int row, column;
string W;
char c[9][9];

int main() {
  cin >> column >> row >> W;
  --row; --column;

  rep (i, 9) {
    rep (j, 9) {
      cin >> c[i][j];
    }
  }

  int move_row = 0;
  int move_column = 0;

  rep (i, W.size()) {
    if (W[i] == 'R') {
      move_column = 1;
    }
    else if (W[i] == 'L') {
      move_column = -1;
    }
    else if (W[i] == 'U') {
      move_row = -1;
    }
    else if (W[i] == 'D') {
      move_row = 1;
    }
  }


  rep (i, 4) {
    cout << c[row][column];

    if (row + move_row >= 9) {
      move_row *= -1;
    }
    if (column + move_column >= 9) {
      move_column *= -1;
    }
    if (row + move_row < 0) {
      move_row *= -1;
    }
    if (column + move_column < 0) {
      move_column *= -1;
    }
    row += move_row;
    column += move_column;
  }
  cout << endl;
}
