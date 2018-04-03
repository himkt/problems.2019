//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
  return (a * b) / __gcd(a, b);
}

int main() {
  char N[4];
  cin >> N;

  int cnt = 0;
  int ans = 0;
  char prev_char = '*';

  rep (i, 4) {
    if (prev_char == N[i]) cnt++;
    else cnt = 1;

    ans = max(ans, cnt);
    prev_char = N[i];
  }

  if (ans >= 3) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}

