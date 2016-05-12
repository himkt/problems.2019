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

using namespace std;
 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)

typedef long long ll;
int N, L[50000];

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  ll ans = 0;

  cin >> N;
  rep ( i, N ) {
    cin >> L[i];
  }

  while (N > 1) {
    int mii1 = 0;
    int mii2 = 1;

    if (L[mii1] > L[mii2]) swap(mii1, mii2);

    for (int i = 2; i < N; i++) {
      if ( L[i] < L[mii2] ) {
        mii2 = mii1;
        mii1 = i;
      }
      else {
        mii2 = i;
      }
    }

    int t = L[mii1] + L[mii2];
    ans += t;

    if ( mii1 == N - 1 ) swap(mii1, mii2);
    L[mii1] = t;
    L[mii2] = L[N-1];
    N--;
  }

  cout << ans << endl;
}
