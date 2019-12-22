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

    vector<int> cost(n, 0);
    queue<pair<int, int>> que;
    que.push(make_pair(v, 0));
    while (!que.empty()) {
        auto p = que.front(); que.pop();
        int cur = p.first;
        int cst = p.second;
        cost[cur] = cst;

        for (int next_n: g[cur]) {
            if (next_n == v or cost[next_n] > 0) continue;
            que.push(make_pair(next_n, cst+1));
        }
    }

    vector<int> cost2(n, 0);
    queue<pair<int, int>> que2;
    que2.push(make_pair(u, 0));
    while (!que2.empty()) {
        auto p = que2.front(); que2.pop();
        int cur = p.first;
        int scr = p.second;
        if (scr > n) break;

        if (scr < cost[cur]) {
            cost2[cur] = scr;
        }

        for (int next_n: g[cur]) {
            if (scr >= cost[next_n]) continue;
            que2.push(make_pair(next_n, scr+1));
        }
    }

    int ans = -1;
    for (int i=0; i<n; i++) ans = max(ans, cost2[i]);
    if (ans == 0) ans++;
    cout << ans << endl;
    return 0;
}

