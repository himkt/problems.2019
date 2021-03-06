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
int ans = 0;

void dfs(int sx, int sy, int sum){

  rep(i, 4) {
    int nx = sx + dx[i], ny = sy + dy[i];

    if (0 <= nx && nx < h && 0 <= ny && ny < w){
      sum++;

      if (a[sx][sy] < a[nx][ny]) {
        dfs(nx, ny, sum);
      }
    }
  }

  if (sum != 0) {
    ans++;
  }
}


int main() {

  std::cin.tie(0);
  std::ios::sync_with_stdio(false);
  cin >> h >> w;

  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
    }
  }

  rep(i, h) {
    rep(j, w) {
      int sx = i, sy = j;
      dfs(sx, sy, 0);
    }
  }

  cout << (ans % (1000000000 + 7)) << endl;
}
