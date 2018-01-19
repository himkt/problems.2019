//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int x, y;
bool reached = false;


void search(int i, int j, int k, vector<int> &action) {
  if (i == x && j == y) reached = true;
  if (k > action.size()) return;

  if (k == 0) {
    x += action[k];
  }
  rep (s, 2) {
    rep (t, 2) {
      // cout << s << ", " << t << endl;
      if (s == 0 && t == 0) search(i+action[k], j, k+1, action);
      if (s == 0 && t == 1) search(i-action[k], j, k+1, action);
      if (s == 1 && t == 0) search(i, j+action[k], k+1, action);
      if (s == 1 && t == 1) search(i, j-action[k], k+1, action);
    }
  }

}


int main() {
  string s;
  cin >> s;
  cin >> x >> y;

  int cnt = 0;
  vector<int> action;
  rep (i, s.size()) {
    if (s[i] == 'F') {
      cnt += 1;
    }
    else if (s[i] == 'T') {
      action.push_back(cnt);
      cnt = 0;
    }
  }

  if (cnt > 0) action.push_back(cnt);
  search(0, 0, 0, action);

  if (reached) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}

