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

int board[10][5];

int check(int score) {
  rep (i, 10) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][3] == board[i][4]) {
      if (board[i][0] != -1) score += board[i][0] * 5;
      board[i][0] = -1;
      board[i][1] = -1;
      board[i][2] = -1;
      board[i][3] = -1;
      board[i][4] = -1;
    }
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == board[i][3]) {
      if (board[i][0] != -1) score += board[i][0] * 4;
      board[i][0] = -1;
      board[i][1] = -1;
      board[i][2] = -1;
      board[i][3] = -1;
    }
    if (board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][3] == board[i][4]) {
      if (board[i][1] != -1) score += board[i][1] * 4;
      board[i][1] = -1;
      board[i][2] = -1;
      board[i][3] = -1;
      board[i][4] = -1;
    }
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
      if (board[i][0] != -1) score += board[i][0] * 3;
      board[i][0] = -1;
      board[i][1] = -1;
      board[i][2] = -1;
    }
    if (board[i][1] == board[i][2] && board[i][2] == board[i][3]) {
      if (board[i][1] != -1) score += board[i][1] * 3;
      board[i][1] = -1;
      board[i][2] = -1;
      board[i][3] = -1;
    }
    if (board[i][2] == board[i][3] && board[i][3] == board[i][4]) {
      if (board[i][2] != -1) score += board[i][2] * 3;
      board[i][2] = -1;
      board[i][3] = -1;
      board[i][4] = -1;
    }
  }

  return score;
}

void update() {
  int board_tmp[10][5];
  rep (i, 10) {
    rep (j, 5) {
      board_tmp[i][j] = -1;
    }
  }

  rep (column, 5) {
    vector<int> nonzeros;

    for (int i = 10; i > 0; i--) {
      if (board[i][column] != -1) nonzeros.push_back(board[i][column]);
    }

    int j = 10;
    rep (k, nonzeros.size()) {
      board[j][column] = nonzeros[k];
      j--;
    }
  }
}

void solve(int n) {
  rep (i, 10) {
    rep (j, 5) {
      board[i][j] = -1;
    }
  }

  FOR (i, 10 - n, 10) {
    rep (j, 5) {
      cin >> board[i][j];
    }
  }

  int score = 0;
  rep (t, 18) {
    score = check(score); // ok
    update();
  }
  cout << score << endl;
}

int main() {
  int n;
  while (cin >> n) {
    if (n == 0) break;
    solve(n);
  }
}
