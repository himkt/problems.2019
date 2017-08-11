//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  bool wrong = false; // 初期値はtrueなことがある

  string s;
  rep (i, n) {
    cin >> s;
    if (s == "A") {
      cnt++;
    }
    else if (s == "Un") {
      if (cnt > 0) {
        cnt--;
      }
      else {
        wrong = true;
      }
    }
  }

  if (wrong || cnt > 0) {
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
  }

  return 0;
}

