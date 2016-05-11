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

int N;
char S[2000];


void solve () {
  int a = 0, b = N - 1;

  while (a <= b) {
  
    bool left = false;

    for (int i = 0; a + i <= b; i++) {
      if (S[a + i] < S[b-i]) {
        left = true;
        break;
      }
      else if (S[a + i] > S[b - i]) {
        left = false;
        break;
      }
    }

    if (left) {
      cout << S[a++];
    }
    else {
      cout << S[b--];
    }
  }
  cout << endl;
}


int main () {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  cin >> N >> S;

  solve();
}
