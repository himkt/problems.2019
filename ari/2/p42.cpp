#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
using namespace std;
 
#define all(c) (c).begin(), (c).end()
#define iter(c) __typeof((c).begin())
#define cpresent(c, e) (find(all(c), (e)) != (c).end())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define tr(c, i) for (iter(c) i = (c).begin(); i != (c).end(); ++i)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
 
int main() {
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);

  int A;
  int C[6];
  int V[6] = {1, 5, 10, 50, 100, 500};

  rep (i, 6) {
    cin >> C[i];
  }

  cin >> A;

  int ans = 0;

  irep (i, 6) {
    int t = min(A / V[i], C[i]);
    A -= t * V[i];

    ans += t;
  }

  cout << ans << endl;
}
