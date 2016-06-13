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

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)

// N is size of row
// M is size of column
// vector< vector<int> > Matrix(N, vector<int>(M, -1));

using namespace std;
const int INF = 1e8;

int factorial(int i) {
  if (i < 1) return 1;
  return i * factorial(i-1);
}

int permutation(int k, int c) {
  return factorial(k) / factorial(k - c);
}

int combination(int k, int c) {
  return factorial(k) / (factorial(c) * factorial(k - c));
}


int H, W;
char board[100][100];
char board2[100][100];
char board3[100][100];
string S;
bool ansable = true;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> H >> W;

  rep (i, H) {
    cin >> S;
    rep (j, W) {
      board[i][j] = S[j];
      board2[i][j] = '.';
      board3[i][j] = '.';
    }
  }

  rep (i, H) {
    rep (j, W) {
      if (board[i][j] == '#' && board[i][j+1] != '.' && board[i][j-1] != '.' && board[i+1][j] != '.' && board[i-1][j] != '.'\
          && board[i-1][j-1] != '.' && board[i-1][j+1] != '.' && board[i+1][j-1] != '.' && board[i+1][j+1] != '.' ) {
        board2[i][j] = '#';
      }
    }
  }

  rep (i, H) {
    rep (j, W) {
      if (board2[i][j] == '#') {
        board3[i-1][j-1] = '#';
        board3[i-1][j] = '#';
        board3[i-1][j+1] = '#';
        board3[i][j-1] = '#';
        board3[i][j] = '#';
        board3[i][j+1] = '#';
        board3[i+1][j-1] = '#';
        board3[i+1][j] = '#';
        board3[i+1][j+1] = '#';
      }
    }
  }

  rep (i, H) {
    rep (j, W) {
      if (board[i][j] != board3[i][j]) {
        cout << "impossible" << endl;
        return 0;
      }
    }
  }

  cout << "possible" << endl;

  rep (i, H) {
    rep (j, W) {
      cout << board2[i][j];
    }
    cout << endl;
  }

  return 0;
}
