# include <cmath>
# include <iostream>
# include <vector>


using namespace std;


int n, m;

vector<int> q;
vector<int> p;
vector<vector<int>> ss;


bool valid(int query) {
    fill(q.begin(), q.end(), 0);

    for (int i=0; i<n; i++) {
        // whether i'th switch is pushed
        if (!(query>>i & 1)) continue;

        // i'th switch is pushed.
        // then which lights are incremented?
        for (int j=0; j<m; j++) {
            if (find(ss.at(i).begin(), ss[i].end(), j) != ss[i].end()) {
                q[j]++;
            }
        }
    }

    int cnt = 0;
    for (int i=0; i<m; i++) {
        if (q[i] % 2 == p[i]) cnt++;
    }
    return cnt == m;
}


int main() {
    cin >> n >> m;

    int k, v;
    ss.resize(n);
    for (int i=0; i<m; i++) {
        cin >> k;

        for (int j=0; j<k; j++) {
            cin >> v; v--;
            ss[v].push_back(i);
        }
    }

    q.resize(m);
    p.resize(m);
    for (int i=0; i<m; i++) cin >> p[i];

    int ans = 0;
    for (int i=0; i<(int)pow(2, n); i++) {
        if (valid(i)) ans++;
    }

    cout << ans << endl;
    return 0;
}

