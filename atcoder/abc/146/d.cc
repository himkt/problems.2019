# include <algorithm>
# include <iostream>
# include <vector>
# include <map>
# include <queue>

using namespace std;

int main() {
    int n, a, b; cin >> n;

    vector<vector<int>> g(n);
    vector<pair<int, int>> vp;

    for (int i=0; i<n-1; i++) {
        cin >> a >> b; a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
        vp.push_back(make_pair(a, b));
    }

    int k=0;
    map<pair<int, int>, int> I;
    vector<int> cs(n, 0);
    vector<int> used(n, 0);

    queue<int> que; que.push(0);
    used[0] = 1;

    while(!que.empty()) {
        int v = que.front(); que.pop();
        k = max(k, (int)g[v].size());

        int cur = 1;
        for (int u: g[v]) {
            if (used[u]) continue;
            if (cur == cs[v]) cur++;

            cs[u] = cur;
            I[make_pair(u, v)] = cur;
            I[make_pair(v, u)] = cur;
            cur++;

            used[u] = 1;
            que.push(u);
        }
    }

    cout << k << endl;
    for (auto p: vp) cout << I[p] << endl;
    return 0;
}
