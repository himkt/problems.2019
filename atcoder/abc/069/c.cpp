//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int n_two;
  int n_four;
  int n_other;

  rep (i, n) {
    if (a[i] % 4 == 0) {
      n_four++;
    }
    else if (a[i] % 2 == 0) {
      n_two++;
    }
    else {
      n_other++;
    }
  }

  int rest = n - (2 * n_four) - n_four;
  if (n_four < n_other) {
    cout << "No" << endl;
  }
  else if (rest <= 0) {
    cout << "Yes" << endl;
  }
  else if (rest > 0 && rest < n_two) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}

