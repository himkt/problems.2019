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
#define tr(c, i) for (iter(c) i = (c).begin(); i != (c).end(); ++i)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)

int h, w;
typedef pair<int, int> P;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int a[1000][1000];
int dp[1000][1000];
int ans = 0;


int main() {

  std::cin.tie(0);
  std::ios::sync_with_stdio(false);
  cin >> h >> w;

  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
      dp[i][j] = 1;
    }
  }

  rep (x, h) {
    rep (y, w) {
      rep (i, 4) {
        int nx = x + dx[i], ny = y + dy[i];
        if (a[x][y] < a[nx][ny]){
          dp[nx][ny] += dp[x][y];
        }
      }
    }
  }

  int ans = 0;

  rep (i, h) {
    rep (j, w) {
      ans += dp[i][j];
    }
  }

  cout << ans << endl;
}
