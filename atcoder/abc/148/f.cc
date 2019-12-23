# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int n, u, v, a, b; cin >> n >> u >> v;
    u--; v--;

    vector<vector<int>> g(n);
    for (int i=0; i<n; i++) g[i].empty();

    for (int i=0; i<n-1; i++) {
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    if (n==2) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> dist1(n, 0);
    queue<pair<int, int>> que;
    que.push(make_pair(v, 0));
    while (!que.empty()) {
        auto p = que.front(); que.pop();
        int cur = p.first;
        int cst = p.second;
        dist1[cur] = cst;

        for (int next_n: g[cur]) {
          if (next_n == v or dist1[next_n] > 0)
            continue;
          que.push(make_pair(next_n, cst + 1));
        }
    }

    vector<int> dist2(n, 0);
    queue<pair<int, int>> que2;
    que2.push(make_pair(u, 0));
    while (!que2.empty()) {
        auto p = que2.front(); que2.pop();
        int cur = p.first;
        int cst = p.second;
        dist2[cur] = cst;

        for (int next_n: g[cur]) {
          if (next_n == u or dist2[next_n] > 0)
            continue;
          que2.push(make_pair(next_n, cst + 1));
        }
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        if (dist1[i] > dist2[i]) ans = max(ans, dist1[i]);
    }

    cout << ans-1 << endl;
    return 0;
}

