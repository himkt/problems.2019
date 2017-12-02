//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


class GravityPuzzleEasy {
  public:
    vector<string> solve(vector<string> board);
};


vector<string> GravityPuzzleEasy::solve(vector<string> board) {
  vector<string> ans(board.size());
  rep (i, board.size()) {
    ans[i].resize(board[i].size());
    fill(ans[i].begin(), ans[i].end(), '.');
  }

  vector<int> cnt(board[0].size());
  fill(cnt.begin(), cnt.end(), 0);
  rep (i, board.size()) {
    rep (j, board[i].size()) {
      if (board[i][j] == '#') {
        cnt[j]++;
      }
    }
  }

  rep (i, cnt.size()) {
    int idx = ans.size() - 1;
    rep (j, cnt[i]) {
      ans[idx][i] = '#';
      idx--;
    }
  }

  return ans;
}


int main() {
  GravityPuzzleEasy().solve({"##", ".#", "#."});
  return 0;

}

