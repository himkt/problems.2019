//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
  return (a * b) / __gcd(a, b);
}

int main() {
  int n, a, b, c, d;
  cin >> n;

  a = n / 1000;
  n -= a * 1000;

  b = n / 100;
  n -= b * 100;

  c = n / 10;
  n -= c * 10;

  d = n;

  rep (i, 2) {
    rep (j, 2) {
      rep (k, 2) {
        int ans = a;
        if (i == 0) {
          ans += b;
        } else {
          ans -= b;
        }

        if (j == 0) {
          ans += c;
        } else {
          ans -= c;
        }

        if (k == 0) {
          ans += d;
        } else {
          ans -= d;
        }

        if (ans == 7) {
          string op1, op2, op3;
          if (i == 0) op1 = "+";
          else op1 = "-";

          if (j == 0) op2 = "+";
          else op2 = "-";

          if (k == 0) op3 = "+";
          else op3 = "-";

          cout << a << op1 << b << op2 << c << op3 << d << "=7";
          return 0;
        }
      }
    }
  }

  return 0;
}

