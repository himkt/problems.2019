# include <iostream>
# include <vector>
# include <cmath>


using namespace std;


vector<int> ps = {1};


int main() {
    int n; cin >> n;

    for (int i=1; pow(6, i) <= n; ++i) {
        if (pow(6, i) > n) continue;
        ps.push_back(pow(6, i));
    }
    for (int i=1; pow(9, i) <= n; ++i) {
        if (pow(9, i) > n) continue;
        ps.push_back(pow(9, i));
    }
    sort(ps.begin(), ps.end());

    vector<int> dp(n+1);
    fill(dp.begin(), dp.end(), 1e8);
    dp[0] = 0;  // to withdraw 0 yen, it requires 0 operation

    for (int i=0; i<=n; ++i) {
        for (int p: ps) {
            if (i >= p) {
                dp[i] = min(dp[i], dp[i-p]+1);
            }
        }
    }

    cout << dp[n] << endl;
}

