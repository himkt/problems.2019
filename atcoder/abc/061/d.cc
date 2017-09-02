//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int n, m;
vector<long long> a, b, c;
vector<long long> dist;
vector<bool> negative;
long long INF = 1001001001001001001;


int main() {
  cin >> n >> m;

  a.resize(m); b.resize(m); c.resize(m);

  rep (i, m) {
    cin >> a[i] >> b[i] >> c[i];
    a[i]--; b[i]--;
    c[i] = -c[i];
  }


  dist.resize(n);
  fill(dist.begin(), dist.end(), INF);
  dist[0] = 0;

  rep (i, n-1) {
    rep (j, m) {
      if (dist[a[j]] == INF) continue;
      if (dist[b[j]] > dist[a[j]] + c[j]) {
        dist[b[j]] = dist[a[j]] + c[j];
      }
    }
  }


  negative.resize(n);
  fill(negative.begin(), negative.end(), false);

  rep (i, n) {
    rep (j, m) {
      if (dist[a[j]] == INF) continue;
      if (dist[b[j]] > dist[a[j]] + c[j]) {
        dist[b[j]] = dist[a[j]] + c[j];
        negative[b[j]] = true;
      }
    }
  }

  if (negative[n-1]) {
    cout << "inf" << endl;
  }
  else {
    cout << -dist[n-1] << endl;
  }
}
