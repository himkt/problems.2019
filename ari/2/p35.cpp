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
 
int N, M, res;
char field[100][100];

void dfs(int i, int j) {
  field[i][j] = '.';

  // 横に行くかどうか
  for (int dx = -1; dx <= 1; dx++) {
    for (int dy = -1; dy <= 1; dy++) {
      int nx = i + dx;
      int ny = j + dy;

      if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') return dfs(nx, ny);
    }
  }

  return ;
}


int main() {
  cin >> N >> M;

  rep(i, N){
    rep(j, M){
      cin >> field[i][j];
    }
  }

  rep(i, N){
    rep(j, M){

      if (field[i][j] == 'W'){
        // 水たまりを埋める
        dfs(i, j);
        res++;
      }
    }
  }

  cout << res << endl;
}
