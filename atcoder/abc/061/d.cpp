# include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

struct edge{
  int from, to;
  long long cost;
};

const long long INF = 1e15;

bool solve(int s, int n, int m, vector<long long> d, vector<edge> es) {
  for (int i=0; i<n; i++) d[i] = INF;
  d[s] = 0;

  int cnt = 0;

  while (true) {
    bool update = false;
    for (int i=0; i<m; i++) {
      edge e = es[i];
      if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }
    cnt++;

    if (!update) return true;
    if (cnt > n) return false;
  }
}

void dfs(vector<vector<int>> &adj, vector<bool> &valid, int m) {
  stack<int> s;

  s.push(m);
  valid[m] = true;

  vector<bool> used(adj.size());

  while(!s.empty()) {
    int k = s.top(); s.pop();

    rep (j, adj.size()) {
      if (!valid[j] && adj[k][j]) {
        valid[j] = true;
        s.push(j);
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<edge> es(m);

  vector<vector<int>> adj(n);
  rep (i, n) adj[i] = vector<int>(n);

  vector<long long> d(n);
  vector<bool> valid(n);

  int a, b;
  long long c;
  rep (i, m) {
    cin >> a >> b >> c;
    a--; b--;

    es[i].from = a;
    es[i].to = b;
    es[i].cost = -c;

    adj[b][a] = 1;
  }

  dfs(adj, valid, m-1);
  rep (i, valid.size()) {
    if (valid[i]) cout << i << endl;
  }

  cout << 'a' << endl;

  if (solve(0, n, m, d, es)) {
    cout << -d[n-1] << endl;
    // cout << d[0] + d[2] << endl;
    // cout << typeid(1).name() << endl;
    // cout << typeid(d[0]).name() << endl;
    // rep (i, n) {
    //   cout << d[i] << endl;
    // }
  }
  else {
    cout << "inf" << endl;
  }
}
