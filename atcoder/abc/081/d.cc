//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

void print(vector<int> &a) {
  rep (i, a.size()) cout << a[i] << " ";
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> b(n);
  rep (i, n) cin >> a[i];

  copy(a.begin(), a.end(), b.begin());
  sort(b.begin(), b.end());
  rep (i, n) {
    cout << i << endl;
    if (i == 0) continue;
    if (a[i-1] < a[i]) continue; // すでに昇順

    rep (j, n) {
      if (a[i] < a[i] + b[j]) {
        a[i] += b[j];
      }
    }
    cout << i << endl;
  }
  print(a);

  return 0;
}

