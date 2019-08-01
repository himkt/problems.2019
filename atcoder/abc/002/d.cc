#include <algorithm>
#include <iostream>
#include <istream>
#include <iterator>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>


using namespace std;


int dfs(vector<vector<int>> v, int source, set<int> members) {
    for (int target: v[source]) {

        bool is_ok = true;
        for (int member: members) {
            vector<int>::iterator it = find(
                    v[member].begin(),
                    v[member].end(), target
                    );

            if (it == v[member].end()) {
                is_ok = false;
            }
		}

        if (!is_ok) continue;
        if (members.find(target) != members.end()) continue;

        members.insert(target);
        return dfs(v, target, members);
    }

    return members.size();
}


int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v; v.resize(n+1);

    int source, target;
    for (int i=0; i<m; ++i) {
        cin >> source >> target;
        v[source].push_back(target);
        v[target].push_back(source);
    }

    int ans = 0;
    for (int i=0; i<n; ++i) {
        set<int> members = {i};
        ans = max(ans, dfs(v, i, members));
    }

    cout << ans << endl;
    return 0;
}
