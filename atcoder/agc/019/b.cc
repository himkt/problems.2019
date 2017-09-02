//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  string A;
  cin >> A;

  set<string> S;
  S.insert(A);

  rep (i, A.size()) {
    for (int j=i+1; j<A.size(); j++) {
      if (i == j) continue;
      string substr = A.substr(i, j-i+1);
      reverse(substr.begin(), substr.end());

      string new_str = A.substr(0, i) + substr + A.substr(j+1);
      S.insert(new_str);
    }
  }
  cout << S.size() << endl;
  return 0;
}

