//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


class Date {
  public:
    Date (int y, int m, int d) : y(y), m(m), d(d) {};
    int y, m, d;
    void next ();
};

void Date::next () {

  // 閏年的なとき
  if (y % 3 == 0) {

    // 月末
    if (d == 20) {

      // 年末
      if (m == 10) {
        y ++;
        m = 1;
        d = 1;
      }

      // 年末以外
      else {
        m ++;
        d = 1;
      }
    }

    // 月末以外
    else {
      d ++;
    }
  }

  // 閏年以外
  else {

    // 大の月
    if (m % 2 == 1) {
      // 月末
      if (d == 20) {
        m ++;
        d = 1;
      }
      else {
        d ++;
      }
    }
    // 小の月
    else {
      // 月末
      if (d == 19) {
        // 年末
        if (m == 10) {
          y ++;
          m = 1;
          d = 1;
        }
        // 年末以外
        else {
          m ++;
          d = 1;
        }
      }
      // 月末以外
      else {
        d ++;
      }
    }
  }
}

int main() {
  int n, y, m, d;
  cin >> n;

  rep (i, n) {
    cin >> y >> m >> d;
    Date date = Date(y, m, d);
    int ans = 0;
    while (!(date.y == 1000 && date.m == 1 && date.d == 1)) {
      date.next();
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}

