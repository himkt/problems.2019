# include <iostream>
# include <queue>
# include <vector>


using namespace std;


int main() {
    int n, m; cin >> n >> m;
    priority_queue<int> que;

    int a_i;
    for (int i=0; i<n; i++) {
        cin >>  a_i;
        que.push(a_i);
    }

    for (int i=0; i<m; i++) {
        a_i = que.top(); que.pop();
        a_i /= 2;
        que.push(a_i);
    }

    long long ans = 0;
    while (!que.empty()) {
        ans += que.top(); que.pop();
    }

    cout << ans << endl;
    return 0;
}

