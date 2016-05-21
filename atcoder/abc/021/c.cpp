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

int N, a, b, M, x, y, mincost, ans;
int d[100][100];
int e[100][100];

queue<int> que;

const int INF = 10 << 10;


// 枝狩りdfsをしてやれば良いのか
void dfs(int a, int sum) {


  rep (i, N) {

    // if a has a edge to i
    if (e[a][i] == 1) {

      cout << endl;
      cout << i << "-" << b << endl;
      cout << mincost << "-" << sum - 1 << endl;
      cout << endl;

      // 次に行く場所がb && コストが n-1
      if (i == b && mincost == sum - 1) {
        cout << 'a';
        ans++;
        return ;
      }

      if (sum < 2 << 10) {// mincost) {
        return dfs(i, sum+1);
      }
    }
  }
}


int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

	cin >> N >> a >> b >> M;

  a--;
  b--;

  rep (i, N) {
    rep (j, N) {
      e[i][j] = 0;
    }
  }

  rep (i, N) {
    rep (j, N) {

      e[i][j] = 0;

      if (i == j) {
        d[i][j] = 0;
      } else {
        d[i][j] = INF;
      }
    }
  }

	rep (i, M) {
    cin >> x >> y;
    x--;
    y--;
    d[x][y] = 1;
    d[y][x] = 1;
    e[x][y] = 1;
    e[y][x] = 1;
  }

  // ワーシャルフロイドで最短ステップを求めてから経路を評価...

  rep (i, N) {
    rep (j, N) {
      rep (k, N) {
        d[i][k] = min(d[i][k], d[i][j] + d[j][k]);
      }
    }
  }

  mincost = d[a][b];

  ans = 0;

  dfs(a, 0);

  cout << ans << endl;

}
