//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


class TopXorerEasy {
  public:
    int maximalRating(int, int, int);
};

int TopXorerEasy::maximalRating(int A, int B, int C) {
  int k = max(A, max(B, C));

  int d = 0;
  while(true) {
    if (pow(2, d) > k) {
      break;
    }
    d++;
  }

  int ans = 0;
  while (d >= 0) {
    ans += pow(2, d-1);
    d--;
  }

  return ans;
};


int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << TopXorerEasy().maximalRating(a, b, c) << endl;
  return 0;
}

