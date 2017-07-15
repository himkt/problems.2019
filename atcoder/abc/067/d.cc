//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int n, a, b;

vector<int> bfs(vector<vector<int>> &G, int s) {
  vector<bool> used(n);
  vector<int> d(n);
  queue<pair<int, int>> que;

  d[s] = 0;
  used[s] = true;
  que.push(make_pair(s, 0));

  while (!que.empty()) {
    pair<int, int> q = que.front(); que.pop();
    int cx = q.first;
    int ct = q.second;
    used[cx] = true;
    d[cx] = ct;

    rep (i, G[cx].size()) {
      int nx = G[cx][i];
      if (!used[nx]) {
        que.push(make_pair(nx, ct+1));
      }
    }
  }
  return d;
}

int main() {
  cin >> n;
  vector<vector<int>> G(n);

  rep (i, n-1) {
    cin >> a >> b;
    a--; b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  int s = 0;
  int g = n-1;

  vector<int> d1 = bfs(G, s);
  vector<int> d2 = bfs(G, g);

  int l = 0;
  int r = 0;

  rep (i, n) {
    if (d1[i] <= d2[i]) l++;
    else r++;
  }

  if (l > r) cout << "Fennec" << endl;
  else cout << "Snuke" << endl;
  return 0;
}

