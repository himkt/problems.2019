# include <iostream>
# include <vector>
# include <queue>


using namespace std;

const int mod = 1e9+7;

typedef pair<int, int> p;


int main() {
    int n, a, b; cin >> n >> a >> b; --a; --b;

    vector<vector<int>> dist(n);
    for (int i=0; i<n; ++i) {
        dist.at(i).resize(n);
        fill(dist.at(i).begin(), dist.at(i).end(), 1001001001);
        dist.at(i).at(i) = 0;
    }

    int m, x, y; cin >> m;
    vector<vector<int>> g(n), ng(n);  // ng: new graph

    for (int i=0; i<m; ++i) {
        cin >> x >> y; --x; --y;
        dist.at(x).at(y) = 1;
        dist.at(y).at(x) = 1;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    // Floyd-Warshall
    for (int k=0; k<n; ++k) {
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                dist.at(i).at(j) = min(dist.at(i).at(j), dist.at(i)[k]+dist[k].at(j));
            }
        }
    }

    vector<bool> used(n); fill(used.begin(), used.end(), false);
    vector<int> ans(n)  ; fill(ans.begin() ,  ans.end(),     0);
    ans.at(a) = 1;

    priority_queue<p, vector<p>, greater<p>> queue; queue.push(make_pair(0, a));

    while(!queue.empty()) {
        p pair = queue.top(); queue.pop();
        int node = pair.second;
        int cost = pair.first;
        if(used.at(node)) continue;

        for (int next_node: g.at(node)) {
            if (used.at(next_node)) continue;
            if (dist.at(a).at(next_node) == cost+1) {
                queue.push(make_pair(cost+1, next_node));
                ans.at(next_node) += ans.at(node);
                ans.at(next_node) %= mod;
            }
        }

        used.at(node) = true;
    }

    cout << ans[b] << endl;
    return 0;
}
