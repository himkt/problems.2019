//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int n;
vector<string> s(2);
vector<vector<char>> field(2);
vector<vector<bool>> visited(2);


void dfs () {}


int main() {
  cin >> n >> s[0] >> s[1];

  rep (i, 2) {
    field[i].resize(n);
    visited[i].resize(n);

    rep (j, n) {
      field[i][j] = s[i][j];
      visited[i][j] = false;
    }
  }

  rep (i, n) {
    if (field[i][0] == field[i][1]) {

    }
  }
  return 0;
}

