# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> a(n);
  vector<long long> b(n);

  rep (i, n) {
    cin >> a[i];
  }

  int index = n / 2;
  int next_ = n % 2 ? 1 : -1;

  b[index] = a[0];

  rep (t, n-1) {
    int window = t / 2 + 1;
    // cout << window << endl;

    if (next_ == 1) {
      b[index+window*next_] = a[t+1];
      next_ = -1;
    }
    else {
      b[index+window*next_] = a[t+1];
      next_ = 1;
    }
  }

  rep (i, n) {
    cout << b[i];
    if (i != b.size()) cout << ' ';
    else cout << endl;
  }
}
