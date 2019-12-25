# include <iostream>
# include <queue>
# include <vector>


using namespace std;


int main() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> jobs(n);
    for (int i=0; i<n; i++) {
        cin >> jobs[i].first >> jobs[i].second;
    }

    sort(jobs.begin(), jobs.end());
    priority_queue<int> que;

    int ans = 0;
    int cur = 0;
    for (int t = 1; t <= m; t++) {
        for (; cur < n; cur++) {
            if (jobs[cur].first <= t) {
                que.push(jobs[cur].second);
            }
            else {
                break;
            }
        }

        if (que.size() > 0) {
            ans += que.top(); que.pop();
        }
    }

    cout << ans << endl;
    return 0;
}
