//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int V, E, r, s, t, d;
vector<long long> dist;
vector<bool> visited;
vector<vector<long long>> cost;
const long long INF = 1LL<<50;


int main() {
  cin >> V >> E >> r;
  cost.resize(V); rep(i, V) cost[i].resize(V);
  rep (i, V) fill(cost[i].begin(), cost[i].end(), INF);
  dist.resize(V); fill(dist.begin(), dist.end(), INF);
  visited.resize(V); fill(visited.begin(), visited.end(), false);

  rep (i, E) {
    cin >> s >> t >> d;
    cost[s][t] = d;
  }

  dist[r] = 0;

  while (true) {
    int v = -1;

    // 頂点を見つける
    rep (u, V) {
      if (!visited[u] && (v == -1 || dist[u] < dist[v])) v = u;
    }

    if (v == -1) break;
    visited[v] = true;

    rep (u, V) {
      dist[u] = min(dist[u], dist[v] + cost[v][u]);
    }
  }

  for (long long dist_ : dist) {
    if (dist_ == INF) cout << "INF" << endl;
    else cout << dist_ << endl;
  }
  return 0;
}
