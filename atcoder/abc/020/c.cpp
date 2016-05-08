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

char field[10][10];
int h, w, sh, sw, gh, gw;
long long t;
typedef pair<int, int> P;

const int INF = 100000000;

int dh[4] = {0, 1, 0, -1};
int dw[4] = {1, 0, -1, 0};


long long bfs(int tt) {
  queue<P> que;

  int d[h][w];

  rep(i, h) {
    rep(j, w){
      d[i][j] = INF;
    }
  }

  que.push(P(sh, sw));
  d[sh][sw] = 0;


  while (que.size()) {
    P p = que.front();
    que.pop();

    if (p.first == gh && p.second == gw) break;

    rep(i, 4) {
      int nh = p.first + dh[i];
      int nw = p.second + dw[i];

      if (0 <= nh && nh < h && 0 <= nw && nw < w) {
        que.push(P(nh, nw));

        if (field[nh][nw] == '#') {
          d[nh][nw] = d[p.first][p.second] + tt;

        } else {
          d[nh][nw] = d[p.first][p.second] + 1;
        }
      }
    }
  }
  return d[gh][gw];
}


int main() {
  cin >> h >> w >> t;

  rep(i, h) {
    rep(j, w) {
      cin >> field[i][j];

      if (field[i][j] == 'S') {
        sh = i; sw = j;
        field[i][j] = '.';
      }

      if (field[i][j] == 'G') {
        gh = i; gw = j;
        field[i][j] = '.';
      }
    }
  }

  for (long long tt = t; tt >= 0; tt--) {
    long long res = bfs(tt);
    if (res <= t && 0 <= res) {
      cout << tt << endl;
      return 0;
    } 
  }
}
