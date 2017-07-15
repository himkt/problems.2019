//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

long long factorial (int i) {
  if (i > 1) return i * factorial(i-1);
  return 1;
}

long long combination(int n, int k) {
    long long r = 1;
    for (long long d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main() {
  int n, p, a;
  vector<int> odd, even;

  cin >> n >> p;
  rep (i, n) {
    cin >> a;
    if (a % 2 == 0) even.push_back(a);
    else odd.push_back(a);
  }

  int even_size = even.size();
  int odd_size = odd.size();

  long long num_odd = 0;
  if (p == 0) {
    for (int j=0; j<=odd_size; j+=2) {
      num_odd += combination(odd_size, j);
    }
  }
  else {
    for (int j=1; j<=odd_size; j+=2) {
      /* cout << odd_size << 'C' << j << ": " << combination(odd_size, j) << endl; */
      num_odd += combination(odd_size, j);
    }
  }

  /* cout << num_odd << endl; */
  long long ans = num_odd * pow(2, even_size);
  cout << ans << endl;
  return 0;
}

