//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int r_0, w_0, c, r;
  while(cin >> r_0 >> w_0 >> c >> r, r_0) {

    for (int x=0; x<1001001001; x++) {
      if (c <= (double)(r_0+x*r)/w_0){
        cout << x << endl;
        break;
      }
    }
  }
  return 0;
}

