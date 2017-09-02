//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int v, e, r;
vector<long long> s, t, d;
vector<long long> dist;
const long long INF = 1LL<<50;

vector<bool> visited;

void dfs(int i, int cnt) {
  visited[i] = true;
  if (cnt > v) return;

  rep (k, e) {
    if (s[k] == i) {
      return dfs(t[k], ++cnt);
    }
  }
}

int main() {
  cin >> v >> e >> r;

  s.resize(e); t.resize(e); d.resize(e);
  rep (i, e) cin >> s[i] >> t[i] >> d[i];

  dist.resize(v);
  fill(dist.begin(), dist.end(), INF);
  dist[r] = 0;

  visited.resize(v);
  fill(visited.begin(), visited.end(), false);

  rep (i, v-1) {
    rep (j, e) {
      if (dist[s[j]] == INF) continue;

      if (dist[t[j]] > dist[s[j]] + d[j]) {
        dist[t[j]] = dist[s[j]] + d[j];
      }
    }
  }

  vector<bool> negative(v);
  fill(negative.begin(), negative.end(), false);

  // rep (i, v) {
  //   rep (j, e) {
  //     if (dist[s[j]] == INF) continue;
  //
  //     if (dist[t[j]] > dist[s[j]] + d[j]) {
  //       dist[t[j]] = dist[s[j]] + d[j];
  //       negative[t[j]] = true;
  //     }
  //   }
  // }

  rep (i, v) {
    if (negative[i]) cout << "INF" << endl;
    else if (dist[i] == INF) cout << "INF" << endl;
    else cout << dist[i] << endl;
  }
  return 0;
}
