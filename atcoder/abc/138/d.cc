# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;



int main() {
    int n, q; cin >> n >> q;

    vector<vector<int>> g(n);
    for (int i=0; i<n; i++) g[i] = vector<int>();  // id=i+1

    int s, d;
    for (int i=0; i<n-1; i++) {
        cin >> s >> d;
        s--; d--;
        g[s].push_back(d);
    }

    int p, x;
    vector<int> scores(n);
    fill(scores.begin(), scores.end(), 0);
    for (int i=0; i<q; i++) {
        cin >> p >> x;
        scores[p-1] += x;
    }

    queue<pair<int, int>> queue;
    queue.push(make_pair(0, scores[0]));

    int node, score;
    while (!queue.empty()) {
        node  = queue.front().first;
        score = queue.front().second;
        scores[node] = score;
        queue.pop();

        for (auto next_node: g[node]) {
            queue.push(make_pair(next_node, score+scores[next_node]));
        }
    }

    cout << scores[0];
    for (int i=1; i<n; i++) cout << ' ' << scores[i];
    cout << endl;
    return 0;
}

