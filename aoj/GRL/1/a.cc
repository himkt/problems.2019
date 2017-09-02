//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, int>;


struct edge{
  edge(int to, ll cost) : to(to), cost(cost) {};

  int to;
  ll cost;
};

int V, E, r, s, t;
ll d;
vector<ll> dist;
const ll INF = 1LL<<50;


int main() {
  cin >> V >> E >> r;
  vector<edge> G[V];

  rep (i, E) {
    cin >> s >> t >> d;
    G[s].push_back(edge(t, d));
  }


  priority_queue<P, vector<P>, greater<P>> que;
  dist.resize(V); fill(dist.begin(), dist.end(), INF);
  dist[r] = 0;

  que.push(P(0, r));
  while (!que.empty()) {
    P p = que.top(); que.pop();
    int v = p.second;

    if (dist[v] < p.first) continue;

    rep (i, G[v].size()) {
      edge e = G[v][i];

      if (dist[e.to] > dist[v] + e.cost) {
        dist[e.to] = dist[v] + e.cost;
        que.push(P(dist[e.to], e.to));
      }
    }
  }

  for (ll dist_ : dist) {
    if (dist_ == INF) cout << "INF" << endl;
    else cout << dist_ << endl;
  }

  return 0;
}
