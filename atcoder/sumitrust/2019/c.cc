# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int x; cin >> x;
    vector<int> dp(100000, 0);

    queue<int> que;
    que.push(0);

    vector<int> dx = {100, 101, 102, 103, 104, 105};

    while (!que.empty()) {
        int c = que.front(); que.pop();
        for (int dx_: dx) {
            if (c+dx_ > 100000) continue;
            if (dp[c+dx_]) continue;
            dp[c+dx_] = 1;
            que.push(c+dx_);
        }
    }

    cout << dp[x] << endl;
    return 0;
}

