//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  string s1, s2;
  cin >> s1;
  cin >> s2;

  reverse(s1.begin(), s1.end());
  if (s1 == s2) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}

