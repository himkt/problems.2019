# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
# define irep(i, n) for (ll i = ll(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (ll i = ll(m); i < (ll)(n); i++)

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

vector<ll> order(10);

ll index(ll target) {
  rep (i, 10) {
    if (order[i] == target) return i;
  }
  return -1;
}

ll pow(int n, ll k) {
  ll res = 1;
  rep (i, k) res *= n;
  return res;
}

bool compare(ll a, ll b) {
  ll digit_a = log10(a) + 1;
  ll digit_b = log10(b) + 1;

  if (digit_a != digit_b) {
    return log10(a) < log10(b);
  }

  for (ll i = digit_a; i >= 0; i--) {

    // n桁目の数が取れていない (今は上位n桁の数が取れてしまっている)
    ll a_k = a / pow(10, i-1) % pow(10, i-1);
    ll b_k = b / pow(10, i-1) % pow(10, i-1);

    // vector<ll> aで定義されている数値ごとの順序関係で比較
    // a.find(1), a.find(2) で比較するとかすると良さそう
    if (index(a_k) != index(b_k)) {
      return index(a_k) < index(b_k);
    }
  }

  return 1;
}

int main() {
  rep (i, 10) cin >> order[i];
  ll n; cin >> n;
  vector<ll> num(n);
  rep (i, n) cin >> num[i];

  sort(num.begin(), num.end(), compare);

  for (ll n : num) {
    cout << n << endl;
  }
}
