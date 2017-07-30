//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n, q, m, d;
  map<int, int>::iterator it;

  while (cin >> n >> q, n) {
    map<int, int> freq;
    rep (i, n) {

      cin >> m;
      rep (k, m) {
        cin >> d;

        it = freq.find(d);
        if (it == freq.end()) {
          freq[d] = 1;
        }
        else {
          freq[d]++;
        }
      }
    }

    int max_d = -1;
    int max_v = 0;

    for (pair<int, int> p : freq) {
      if (max_v < p.second) {
        max_d = p.first;
        max_v = p.second;
      }
    }

    if (max_v >= q) {
      cout << max_d << endl;
    }
    else {
      cout << 0 << endl;
    }
  }
  return 0;
}

