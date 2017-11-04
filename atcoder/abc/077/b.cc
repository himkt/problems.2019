//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  cin >> n;

  long long c;
  int i = 1;

  while (1) {

    if (i*i > n) {
      break;
    }
    c = i*i;
    i++;
  }

  cout << c << endl;
  return 0;
}

