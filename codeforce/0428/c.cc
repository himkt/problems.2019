//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
vector<int> g[100001];
vector<int> result;


int sum(vector<int> &numbers) {
  int ret = 0;
  rep (i, numbers.size()) ret += numbers[i];
  return ret;
}


void dfs(int i, int c) {
  if (g[i].size() == 0) result.push_back(c);

  for (int &e : g[i]) {
    dfs(e, c+1);
  }
}

int main() {
  int n;
  cin >> n;

  int from, to;
  rep (i, n-1) {
    cin >> from >> to;
    g[--from].push_back(--to);
  }

  dfs(0, 0);
  cout << (double)sum(result) / result.size() << endl;

  return 0;
}

