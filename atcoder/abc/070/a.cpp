//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  string n;
  cin >> n;

  string nr = n;
  reverse(nr.begin(), nr.end());

  if (n == nr) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}

